// forEach

const products = [
    { id: 1, name: "apple", price: 500, color: "black" },
    { id: 2, name: "samsung", price: 450, color: "navy blue" },
    { id: 3, name: "oppo", price: 400, color: "blue" },
    { id: 4, name: "oneplus", price: 380, color: "red" },
    { id: 4, name: "pixel", price: 390, color: "black" },
]

// const result1 = products.forEach(product => console.log(product))


const productContainer = document.getElementById("product-container")

const result2 = products.forEach((product) => {
    // console.log(product);
    const h1 = document.createElement("h1")
    h1.innerText = product.name
    productContainer.appendChild(h1)
})