const isAuthenticated = () => {
    const token = localStorage.getItem("token");
    return token !== null;
};

// Function to toggle visibility of profile and logout button based on authentication
const toggleAuthElements = () => {
    const profileDropdown = document.querySelector('.dropdown');
    const loginButton = document.getElementById('login-button');
    const registerButton = document.getElementById('register-button');
    if (isAuthenticated()) {
        profileDropdown.style.display = 'block'; // Show profile dropdown
        loginButton.style.display = "none";  // Hide login button
        registerButton.style.display = "none"; // Hide registration button
    } else {
        profileDropdown.style.display = 'none'; // Hide profile dropdown
        loginButton.style.display = "block";   // Show login button
        registerButton.style.display = "block";  // Show registration button
    }
};

// Call the function to toggle visibility on page load
window.onload = toggleAuthElements;


//loading services data
const loadServices = async () => {
    // document.getElementById("service-container").innerHTML = "";
    document.getElementById("services-cards-spinner").style.display = "block"
    try {
        const response = await fetch("https://testing-8az5.onrender.com/services/");
        const services = await response.json();
        // console.log(services)
        document.getElementById("services-cards-spinner").style.display = "none"
        displayServices(services);
    } catch (err) {
        document.getElementById("services-cards-spinner").style.display = "none"
        console.log(err.message);
        console.log(err);
    }
};

const displayServices = (services) => {
    services.forEach((service) => {
        const parent = document.getElementById("service-container")
        const li = document.createElement("li")
        li.innerHTML =
            `
                <li class="service">
                    <div class="service-card card shadow">
                        <div class="card-body p-3 p-xl-4">
                            <div class="ratio ratio-16x9">
                                <img src=${service.image} class="rounded-2" loading="lazy" alt=${service.name}>
                            </div>
                            <p class="card-title">${service.name}</p>
                            <p class="card-text">${service.description.slice(0, 120)}</p>
                            <div><a href="#" class="card-details">Learn more</a>
                            </div>
                        </div>
                    </div>
                </li>
            `
        parent.appendChild(li)
    });
}


//loading doctors list
const loadDoctorsList = async (search) => {
    document.getElementById("doc-cards-nodata").style.display = "none"
    document.getElementById("doc-list-cards").innerHTML = "";
    document.getElementById("doc-cards-spinner").style.display = "block"
    try {
        const response = await fetch(`https://testing-8az5.onrender.com/doctor/list/?search=${search ? search : ""}`);
        const doctors = await response.json();
        // console.log(doctors.results)
        if (doctors.results.length > 0) {
            document.getElementById("doc-cards-spinner").style.display = "none"
            displayDoctorsList(doctors?.results);
        }
        else {
            document.getElementById("doc-cards-spinner").style.display = "none"
            document.getElementById("doc-list-cards").innerHTML = "";
            document.getElementById("doc-cards-nodata").style.display = "block"
        }
    } catch (err) {
        document.getElementById("doc-cards-spinner").style.display = "none"
        console.log(err.message);
        console.log(err);
    }
};


const displayDoctorsList = (doctors) => {
    doctors.forEach(doctor => {
        const parent = document.getElementById("doc-list-cards")
        const div = document.createElement("div")
        div.classList.add("doc-card", "col-3", "gy-4");
        div.innerHTML =
            `
                <div class="card-div col-3 gy-4">
                    <div class="card" style="width: 19rem;">
                        <div class="card-body text-center ">
                            <div class="rounded-circle"><img class="rounded-circle " style="width: 13rem; height:13rem;" src=${doctor.image}  alt="..."></div>
                            <h5 class="card-title">${doctor.full_name}</h5>
                            ${doctor?.designation?.map((item) => {
                return `<h6 class="card-subtitle">${item}</h6>`
            })}
                            <p class="card-text">
                            ${doctor?.specialization?.map((item) => {
                return `<button class="btn btn-sm btn-secondary m-1">${item}</button>`
            }).join('')}
                            </p>
                            <a class="btn btn-sm btn-primary" target="_blank" href="docDetails.html?doctorId=${doctor.id}">Details</a>
                        </div>
                    </div>
                </div>
            `
        parent.appendChild(div)
    });
}


//loading designation list
const loadDesignation = async () => {
    document.getElementById("des-spinner").style.display = "block"
    try {
        const response = await fetch("https://testing-8az5.onrender.com/doctor/designation/");
        const designation = await response.json();
        // console.log(designation)
        document.getElementById("des-spinner").style.display = "none"
        designation.forEach((item) => {
            const parent = document.getElementById("designation-dropdown");
            const li = document.createElement("li");
            li.classList.add("dropdown-item");
            // li.innerText = item?.name
            li.innerHTML = `<li onclick="loadDoctorsList('${item.name}')">${item.name}</li>`;
            parent.appendChild(li);
        })
    } catch (err) {
        document.getElementById("des-spinner").style.display = "none"
        console.log(err.message);
        console.log(err);
    }
};
//loading specialization list
const loadSpecialization = async () => {
    document.getElementById("spe-spinner").style.display = "block"
    try {
        const response = await fetch("https://testing-8az5.onrender.com/doctor/specialization/");
        const specialization = await response.json();
        // console.log(specialization)
        document.getElementById("spe-spinner").style.display = "none"
        specialization.forEach((item) => {
            const parent = document.getElementById("specialization-dropdown")
            const li = document.createElement("li")
            li.classList.add("dropdown-item")
            // li.innerText = item?.name
            li.innerHTML = `<li onclick="loadDoctorsList('${item.name}')">${item.name}</li>`;
            parent.appendChild(li)
        })
    } catch (err) {
        document.getElementById("spe-spinner").style.display = "none"
        console.log(err.message);
        console.log(err);
    }
};


const handleSearch = () => {
    const value = document.getElementById("search").value
    console.log(value)
    loadDoctorsList(value)
}



const displayClientReview = (reviews) => {
    reviews.forEach((review) => {
        const parent = document.getElementById("review-cards")
        const div = document.createElement("div")
        div.classList.add("card-div", "col-3", "g-4")
        div.innerHTML = `
                    <div class="card">
                        <div class="card-body">
                            <div class="d-flex">
                                <img class="card-top-left rounded-circle" style="width: 80px; height:80px;"
                                    src="assets/images/client-reviewer.png" alt=${review.reviewer}>
                                <div class="card-top-right">
                                    <h5 class="card-title">${review.reviewer}</h5>
                                    <div class="card-rating">
                                        ${review.rating}
                                    </div>
                                </div>
                            </div>
                            <h6 class="card-subtitle">${review.doctor}</h6>
                            <p class="card-text">${review.body.slice(0, 120)}</p>
                        </div>
                    </div>
        `
        parent.appendChild(div)
    })
}


const loadClientReview = async () => {
    document.getElementById("review-cards-spinner").style.display = "block"
    try {
        const response = await fetch("https://testing-8az5.onrender.com/doctor/review/")
        const reviews = await response.json()
        // console.log(reviews)
        document.getElementById("review-cards-spinner").style.display = "none"
        displayClientReview(reviews)
    } catch (err) {
        document.getElementById("review-cards-spinner").style.display = "none"
        console.log(err.message);
        console.log(err);
    }
}

loadServices()
loadDoctorsList()
loadDesignation()
loadSpecialization()
loadClientReview()