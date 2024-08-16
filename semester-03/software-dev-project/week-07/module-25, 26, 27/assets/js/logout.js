const handleLogout = () => {
    const token = localStorage.getItem('token')
    fetch("https://testing-8az5.onrender.com/patient/logout", {
        method: "GET",
        Authorization: `Token ${token}`,
        headers: { "Content-Type": "application/json" },
    })
        .then(response => response.json())
        .then(data => {
            console.log(data)
            localStorage.removeItem('token')
            localStorage.removeItem('user_id')
            localStorage.removeItem('patient_id')
            window.location.href = "index.html"; // Redirect to the home page after successful logout
        })
}