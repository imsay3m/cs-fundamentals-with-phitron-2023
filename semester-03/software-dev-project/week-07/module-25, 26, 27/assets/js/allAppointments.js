const loadAllAppointment = () => {
    // Check if the user is authenticated
    const token = localStorage.getItem('token');
    if (!token) {
        // User is not authenticated, redirect to login page or perform any other action
        window.location.href = "login.html"; // Redirect to the login page
        return;
    }
    const patient_id = localStorage.getItem("patient_id")
    fetch(`https://testing-8az5.onrender.com/appointment/?patient_id=${patient_id}`)
        .then(response => response.json())
        .then((data) => {
            console.log(data)
            console.log(data.length)
            data.forEach(item => {
                const parent = document.getElementById("table-body")
                const tr = document.createElement("tr")
                let svgContent = '';
                if (item.appointment_type === 'Offline') {
                    svgContent = `
                        Offline <svg width="18" height="18" viewBox="0 0 18 18" fill="none"
                            xmlns="http://www.w3.org/2000/svg">
                            <circle cx="9" cy="9" r="9" fill="#D9D9D9" />
                        </svg>
                    `;
                } else {
                    svgContent = `
                        Online <svg width="18" height="18" viewBox="0 0 18 18" fill="none" xmlns="http://www.w3.org/2000/svg">
                                <circle cx="9" cy="9" r="9" fill="#06ABA1"/>
                                </svg>

                    `;
                }
                tr.innerHTML = `
                    <th scope="row">${item.id}</th>
                        <td>${item.time}</td>
                        <td>${item.doctor}</td>
                        <td>Neurosurgeon</td>
                        <td>${svgContent}</td>
                        <td>${item.appointment_status}</td>
                        <td>${item.appointment_status === "Pending" ? `<svg width="24" height="24" viewBox="0 0 24 24" fill="none"
                                xmlns="http://www.w3.org/2000/svg">
                                <circle cx="12" cy="12" r="12" fill="#FF0000" />
                                <path fill-rule="evenodd" clip-rule="evenodd"
                                    d="M8.96893 11.6628L5.93848 8.63239L8.96893 5.60193L11.9994 8.63239L15.0299 5.60193L18.0603 8.63239L15.0299 11.6628L18.0603 14.6933L15.0299 17.7238L11.9994 14.6933L8.96893 17.7238L5.93848 14.6933L8.96893 11.6628Z"
                                    fill="white" />
                                </svg>`: `<svg id="mySvg" width="24" height="24" viewBox="0 0 24 24" fill="none"
                                xmlns="http://www.w3.org/2000/svg">
                                <circle cx="12" cy="12" r="12" fill="#C8B5B5" />
                                <path fill-rule="evenodd" clip-rule="evenodd"
                                    d="M8.96893 11.6628L5.93848 8.63239L8.96893 5.60193L11.9994 8.63239L15.0299 5.60193L18.0603 8.63239L15.0299 11.6628L18.0603 14.6933L15.0299 17.7238L11.9994 14.6933L8.96893 17.7238L5.93848 14.6933L8.96893 11.6628Z"
                                    fill="white" />
                                </svg>`}</td>
                        <td>1000</td>
                `
                parent.appendChild(tr)
            });
        })
        .catch(error => console.error('Error:', error));
}
loadAllAppointment()