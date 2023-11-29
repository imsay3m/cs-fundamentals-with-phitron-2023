//API

// fetch("https://dummyjson.com/products/1")
//     .then(res => console.log(res))

// fetch("https://dummyjson.com/products/1")
//     .then(res => res.json())
//     .then(data => console.log(data))

fetch("https://dummyjson.com/products/1")
    .then(res => res.json())
    .then(data => console.log(data))

fetch("https://dummyjson.com/products")
    .then(res => res.json())
    .then(data => console.log(data.products[0].title))
    .catch(err => {
        console.log(err)
    })
fetch("https://dummyjso.com/products/1")
    .then(res => res.json())
    .then(data => console.log(data))
    .catch(err => {
        console.log(err)
    })
