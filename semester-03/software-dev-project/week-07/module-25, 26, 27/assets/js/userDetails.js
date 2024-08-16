const loadUserDetails = () => {
    // Check if the user is authenticated
    const token = localStorage.getItem('token');
    if (!token) {
        // User is not authenticated, redirect to login page or perform any other action
        window.location.href = "login.html"; // Redirect to the login page
        return;
    }
    const user_id = localStorage.getItem("user_id")
    fetch(`https://testing-8az5.onrender.com/users/${user_id}`)
        .then((response) => response.json())
        .then((data) => {
            console.log(data)
            const parent = document.getElementById("user-details-container")
            const div = document.createElement("div")
            div.className = ("card border-primary mb-3 mx-auto")
            div.style.maxWidth = "540px"
            div.innerHTML = `
                <div class="d-flex g-0 align-items-center">
                    <div class="col-md-4">
                        <img src="assets/images/doc-details.jpg" class="img-fluid rounded"
                            alt="user-image">
                    </div>
                    <div class="col-md-8">
                        <div class="card-body">
                            <h5 class="card-title mb-1">Name: ${data.first_name + " " + data.last_name}</h5>
                            <p class="card-text mb-1"><small class="fw-bold">Username: ${data.username}</small></p>
                            <p class="card-text">Email: ${data.email}</p>
                        </div>
                    </div>
                </div>
                `
            parent.appendChild(div)
        })
        .catch(error => console.error('Error:', error));

}
loadUserDetails()