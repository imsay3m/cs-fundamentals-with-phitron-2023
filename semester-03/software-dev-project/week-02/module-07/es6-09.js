// promise, async, await

const getData = new Promise((resolve, reject) => {
    // return resolve("data found")
    return reject("no data found")
})
console.log(getData)
getData
    .then(data => console.log(data))
    .catch(err => console.log(err))



fetch("https://fakestoreapi.com/products/1")
    .then(res => res.json())
    .then(data => {
        // console.log(data)
        // console.log(data.category)
    }
    )
    .catch(err => console.log(err))



const loadData = async () => {
    try {
        const response = await fetch("https://fakestoreapi.om/products/1") //fetch returns a promise
        console.log(response)
        const data = await response.json()
        console.log(data)
    } catch (err) {
        console.log(err.message)
    }
}

loadData()