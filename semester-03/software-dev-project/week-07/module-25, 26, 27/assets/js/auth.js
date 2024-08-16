const token = localStorage.getItem('token');
if (token) {
    // User is authenticated, redirect to userDetails page
    window.location.href = "userDetails.html";
}

const handleSignup = (event) => {
    event.preventDefault()
    // console.log("hello")
    const username = getValue("username")
    const first_name = getValue("first_name")
    const last_name = getValue("last_name")
    const email = getValue("email")
    const password = getValue("password")
    const confirm_password = getValue("confirm_password")
    const info = { username, first_name, last_name, email, password, confirm_password }
    // console.log(info)
    if (password === confirm_password) {
        if (/^(?=.*[A-Za-z])(?=.*\d)[A-Za-z\d]{8,}$/.test(password)) {
            try {
                fetch("https://testing-8az5.onrender.com/patient/register/", {
                    method: "POST",
                    headers: { "content-type": "application/json" },
                    body: JSON.stringify(info),
                })
                    .then((response) => response.json())
                    .then((data) => {
                        console.log(data)
                        window.location.href = "login.html";
                    })

            } catch (err) {
                console.log(err.message)
                console.log(err)
            }
        }
        else {
            showPasswordAlert("Password must contain at least one letter, one digit, and be at least 8 characters long.")
        }
    } else {
        showPasswordAlert("Your  passwords do not match.")
    }

}


const handleLogin = (event) => {
    event.preventDefault();
    const username = getValue("username-login");
    const password = getValue("password-login");
    console.log(username, password);
    if (username && password) {
        fetch("https://testing-8az5.onrender.com/patient/login/", {
            method: "POST",
            headers: { "content-type": "application/json" },
            body: JSON.stringify({ username, password })
        })
            .then((response) => response.json())
            .then((data) => {
                if (data.token && data.user_id) {
                    localStorage.setItem("token", data.token);
                    localStorage.setItem("user_id", data.user_id);
                    const user_id = data.user_id;
                    // Now, make a POST request to create a new patient
                    fetch(`https://testing-8az5.onrender.com/patient/list/?user_id=${user_id}`)
                        .then(response => response.json())
                        .then((data) => {
                            if (data && data.length > 0 && data[0].id) {
                                localStorage.setItem("patient_id", data[0].id);
                                window.location.href = "index.html";
                            } else {
                                // If patient not found, create a new patient
                                fetch("https://testing-8az5.onrender.com/patient/list/", {
                                    method: "POST",
                                    headers: { "content-type": "application/json" },
                                    body: JSON.stringify({ image: null, mobile_no: "01", user: user_id })
                                })
                                    .then(createPatientResponse => createPatientResponse.json())
                                    .then((createPatientData) => {
                                        console.log("New Created Patient Data", createPatientData);
                                        // Check if patient created successfully
                                        if (createPatientData && createPatientData.id) {
                                            localStorage.setItem("patient_id", createPatientData.id);
                                            window.location.href = "index.html";
                                        } else {
                                            console.error("Failed to create patient.");
                                        }
                                    })
                                    .catch(error => {
                                        console.error("Error while creating patient:", error);
                                    });
                            }
                        })
                        .catch(error => {
                            console.error("Error while fetching patient list:", error);
                        });
                }
            })
            .catch(error => {
                console.error("Error while logging in:", error);
            });
    }
};



const showPasswordAlert = (message) => {
    const parent = document.getElementById("error-container")
    parent.innerHTML = ""
    const alertDiv = document.createElement("div");
    alertDiv.innerHTML = `<div class="alert alert-danger alert-dismissible fade show" role="alert">
                            <span>${message}</span>
                            <button type="button" class="btn-close" data-bs-dismiss="alert" aria-label="Close"></button>
                        </div>
                        `
    parent.appendChild(alertDiv)
}

const getValue = (id) => {
    const value = document.getElementById(id).value
    return value
}