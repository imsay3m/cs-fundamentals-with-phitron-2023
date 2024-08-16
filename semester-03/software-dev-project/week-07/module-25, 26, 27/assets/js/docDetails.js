const getParams = () => {
    // Check if the user is authenticated
    const token = localStorage.getItem('token');
    if (!token) {
        // User is not authenticated, redirect to login page or perform any other action
        window.location.href = "login.html"; // Redirect to the login page
        return;
    }
    document.getElementById("doctor-details-spinner").style.display = "block"
    const param = new URLSearchParams(window.location.search).get("doctorId")
    // console.log(param)
    if (!param || param.trim() === "") {
        document.getElementById("doc-details").innerHTML = `
        <div class="alert alert-danger m-5" role="alert">
            Doctor ID is missing or invalid
        </div>
        `;

        document.getElementById("doctor-details-spinner").style.display = "none";
        return;
    }
    try {
        fetch(`https://testing-8az5.onrender.com/doctor/list/${param}`)
            .then(response => response.json())
            .then((doctor) => {
                document.getElementById("doctor-details-spinner").style.display = "none"
                // console.log(doctor)
                displayDoctor(doctor)
                loadTime(param)
                loadReview(param)
            })


    } catch (err) {
        document.getElementById("doctor-details-spinner").style.display = "none"
        console.log(err.message);
        console.log(err);
    }
}

const loadTime = async (id) => {
    try {
        const response = await fetch(`https://testing-8az5.onrender.com/doctor/availabletime/`)
        const times = await response.json()
        // console.log(times)
        displayTime(times)
    } catch (err) {
        console.log(err.message);
        console.log(err);
    }
}



const displayTime = (times) => {
    // console.log(time)
    const parent = document.getElementById("appointment-time")
    times.forEach((time) => {
        const option = document.createElement("option")
        option.setAttribute("value", `${time.id}`)
        option.innerText = time.name
        parent.appendChild(option)
    })

}

const loadReview = async (id) => {
    try {
        const response = await fetch(`https://testing-8az5.onrender.com/doctor/review/?doctor_id=${id}`)
        const reviews = await response.json()
        // console.log(reviews)
        displayDoctorReview(reviews)

    } catch (err) {
        console.log(err.message);
        console.log(err);
    }
}

const displayDoctor = (doctor) => {
    const parent = document.getElementById("doc-details")
    const div = document.createElement("div")
    div.classList.add("p-5", "d-flex", "align-items-center")
    div.innerHTML = `
    <div class="col-4">
        <img class="rounded-circle img-thumbnail" style="width: 277px;height: 277px;"
            src=${doctor.image} alt="doctor-image">
    </div>
    <div class="col-8">
        <div class="card-body">
            <h5 class="card-title">${doctor.full_name}</h5>
            ${doctor?.designation?.map((item) => {
        return `<p class="card-subtitle m-1 ms-0 pe-1">${item}</p>`
    })}
            <p class="card-text">
                ${doctor?.specialization?.map((item) => {
        return `<button class="btn btn-sm btn-secondary m-1">${item}</button>`
    }).join('')}
                            </p>
            <p class="card-text">Lorem ipsum dolor sit amet consecte adipiscing elit amet hendrerit
                pretium nulla sed enim iaculis mi.</p>
            <p class="card-price">Fees: ${doctor.fee} BDT</p>
            <button type="button" class="btn btn-appointment" data-bs-toggle="modal" data-bs-target="#exampleModal">
            Take Appointment
            </button>
        </div >
    </div >
    `
    parent.appendChild(div)

    /* const appointmentTime = document.getElementById("appointment-time")
    let val = 1
    doctor.available_time.forEach((time) => {
        const option = document.createElement("option")
        option.setAttribute("value", val)
        option.innerText = time
        appointmentTime.appendChild(option)
        val++
    }) */
}


const displayDoctorReview = (reviews) => {
    const parent = document.getElementById("doc-details-review")
    parent.innerHTML = '';
    reviews.forEach((review) => {
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
                            
                            <p class="card-text">${review.body.slice(0, 120)}</p>
                        </div>
                    </div>
        `
        parent.appendChild(div)
    })
}


const handleAppointment = () => {
    const param = new URLSearchParams(window.location.search).get("doctorId")
    let appointmentType
    const types = document.getElementsByName("appointment_type")
    Array.from(types).forEach((type) => {
        if (type.checked) {
            appointmentType = type.value
        }
    })
    let symptom = document.getElementById("symptom-textarea").value

    let appointmentTime
    const times = document.getElementsByTagName("option")
    Array.from(times).forEach((time) => {
        if (time.selected) {
            appointmentTime = time.value
        }
    })

    const patient_id = localStorage.getItem("patient_id")
    // console.log(appointmentType, symptom, appointmentTime)

    const info = {
        "appointment_type": appointmentType,
        "appointment_status": "Pending",
        "time": appointmentTime,
        "symptom": symptom,
        "cancel": false,
        "patient": parseInt(patient_id),
        "doctor": param
    }
    // console.log(info)
    try {
        fetch("https://testing-8az5.onrender.com/appointment/", {
            method: "POST",
            headers: { "content-type": "application/json" },
            body: JSON.stringify(info),
        })
            .then(response => response.json())
            .then(appointmentDetails => {
                console.log(appointmentDetails)
                window.location.href = "allAppointments.html";
            })

    } catch (err) {
        console.log(err.message);
        console.log(err);
    }
}


// const setPatient=()=>{
// https://testing-8az5.onrender.com/patient/list/
// }

const loadPatient = () => {
    const user_id = localStorage.getItem("user_id")
    
    fetch(`https://testing-8az5.onrender.com/patient/list/?user_id=${user_id}`)
        .then(response => response.json())
        .then((data) => {
            // console.log(data)
            if (data && data.length > 0 && data[0].id) {
                localStorage.setItem("patient_id", data[0].id)
            } else {
                console.error("https://testing-8az5.onrender.com/patient/list/ go to thiss url and fix it");
            }
        })
}
loadPatient()
getParams()