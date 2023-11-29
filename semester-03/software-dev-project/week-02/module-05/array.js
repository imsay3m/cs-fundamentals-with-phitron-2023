var friend = ['rahim', 'karim', 'jabbar', 'borkot']
console.log(friend)
// console.log(friend[0])

// push method
friend.push('salam')
console.log(friend)

// pop method
friend.pop()
console.log(friend)

// unshift method
friend.unshift("salam")
console.log(friend)

// shift method
friend.shift()
console.log(friend)

// concat method
friend.concat("dsf")

console.log(['a', 'b'].concat('c'))
console.log(friend)

// reverse method
friend.reverse()
console.log(friend)

//slice method
console.log(friend.slice(2, 4))

//indexOf method 1 means found and -1 means not found
console.log(friend.indexOf("jabbar"))
console.log(friend.indexOf("a"))

//includes method true means found and false means not found
console.log(friend.includes("borkot"))
console.log(friend.includes("b"))
