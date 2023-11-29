function handleDeposite(e) {
    var convertedInputDeposite = getConvertedValue("deposite-input", "value")
    var convertedDepositeAmount = getConvertedValue("deposite-amount", "innerText")
    var sum = convertedInputDeposite + convertedDepositeAmount;

    setInnerText("deposite-amount", sum)
    document.getElementById("deposite-input").value = ""

    var convertedTotalAmount = getConvertedValue("total-amount", "innerText")
    var totalSum = convertedInputDeposite + convertedTotalAmount
    setInnerText("total-amount", totalSum)
}

function handleWithdraw(e) {
    var convertedInputWithdraw = getConvertedValue("withdraw-input", "value")
    var convertedWithdrawAmount = getConvertedValue("withdraw-amount", "innerText")
    var sum = convertedWithdrawAmount + convertedInputWithdraw

    setInnerText("withdraw-amount", sum)
    document.getElementById("withdraw-input").value = ""

    var convertedTotalAmount = getConvertedValue("total-amount", "innerText")
    var totalSum = convertedTotalAmount - convertedInputWithdraw
    setInnerText("total-amount", totalSum)
}


function setInnerText(id, value) {
    document.getElementById(id).innerText = value;
}

function getConvertedValue(id, element) {
    if (element == "innerText") {
        var value = document.getElementById(id).innerText
        return parseFloat(value);
    } else if (element == "value") {
        var value = document.getElementById(id).value
        return parseFloat(value);
    }
}



/* 

function handleDeposite(e) {
    var inputDeposite = document.getElementById("deposite-input").value
    var convertedInputDeposite = convertToNumber(inputDeposite);
    var depositeAmount = document.getElementById("deposite-amount").innerText
    var convertedDepositeAmount = convertToNumber(depositeAmount)
    var sum = convertedInputDeposite + convertedDepositeAmount;

    document.getElementById("deposite-amount").innerText = sum;
    document.getElementById("deposite-input").value = ""

    var totalAmount = document.getElementById("total-amount").innerText
    var convertedTotalAmount = convertToNumber(totalAmount)
    var totalSum = convertedInputDeposite + convertedTotalAmount
    document.getElementById("total-amount").innerText = totalSum
}

function handleWithdraw(e) {
    var inputWithdraw = document.getElementById("withdraw-input").value
    var convertedinputWithdraw = convertToNumber(inputWithdraw)
    var withdrawAmount = document.getElementById("withdraw-amount").innerText
    var convertedWithdrawAmount = convertToNumber(withdrawAmount)
    var sum = convertedWithdrawAmount + convertedinputWithdraw

    document.getElementById("withdraw-amount").innerText = sum
    document.getElementById("withdraw-input").value = ""

    var totalAmount = document.getElementById("total-amount").innerText
    var convertedTotalAmount = convertToNumber(totalAmount)
    var totalSum = convertedTotalAmount - convertedinputWithdraw
    document.getElementById("total-amount").innerText = totalSum
}




function convertToNumber(value) {
    return parseFloat(value);
}

 */
