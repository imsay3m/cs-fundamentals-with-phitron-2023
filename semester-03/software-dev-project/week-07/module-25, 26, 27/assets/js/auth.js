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
                    .then((data) => console.log(data))

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
    event.preventDefault()
    const username = getValue("username-login")
    const password = getValue("password-login")
    console.log(username, password)
    if (username && password) {
        try {
            fetch("https://testing-8az5.onrender.com/patient/login/", {
                method: "POST",
                headers: { "content-type": "application/json" },
                body: JSON.stringify({ username, password })
            })
                .then((response) => response.json())
                .then((data) => {
                    if (data.token && data.user_id) {
                        // console.log(data)
                        localStorage.setItem("token", data.token)
                        localStorage.setItem("user_id", data.user_id)
                        window.location.href = "index.html";
                    }
                })
        } catch (err) {
            console.log(err.message)
            console.log(err)
        }
    }
}


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