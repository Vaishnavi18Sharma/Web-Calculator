function appendToDisplay(value) {
    document.getElementById('display').value += value;
}

function clearDisplay() {
    document.getElementById('display').value = '';
}

function calculate() {
    const expression = document.getElementById('display').value;
    // Send the expression to the backend for calculation
    // Receive the result from the backend and update the display
}


function calculate() {
    const expression = document.getElementById('display').value;
    const requestData = { "expression": expression };

    const xhr = new XMLHttpRequest();
    xhr.open("POST", "http://localhost:8080/calculate", true);
    xhr.setRequestHeader("Content-Type", "application/json");

    xhr.onreadystatechange = function () {
        if (xhr.readyState === XMLHttpRequest.DONE) {
            if (xhr.status === 200) {
                const response = JSON.parse(xhr.responseText);
                document.getElementById('display').value = response.result;
            } else {
                alert('Error: Failed to perform the calculation.');
            }
        }
    };

    xhr.send(JSON.stringify(requestData));
}