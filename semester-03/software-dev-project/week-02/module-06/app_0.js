// console.log('hello');


//--------------------------------------------//
var h1 = document.getElementsByTagName("h1");

var title = (document.getElementById("title").style.color = "red");

var child = document.getElementsByClassName("child")

document.getElementById("title").style.removeProperty("color")

// console.log(child[0])
// console.log(child[1])
// console.log(child)
// console.log(title)
// console.log(h1)


//--------------------------------------------//
var img = document.getElementById("img")

img.setAttribute("alt", 'Profile picture')

img.classList.add('test-class')

// console.log(img.getAttribute("src"))
// console.log(img.getAttribute("alt"))
// console.log(img)


//--------------------------------------------//
var hero = document.getElementById("hero")

var input = document.getElementById('input')
var input = document.getElementById('input').value
// console.log(hero.innerText)
// console.log(input.value)
// console.log(input)

input = parseInt(input)
// console.log(input)
// console.log(typeof input)


//--------------------------------------------//
var parent = document.getElementById('parent').innerHTML
// console.log(parent.innerHTML)
// console.log(parent)


//--------------------------------------------//
var testDiv = document.getElementsByClassName("test")

// console.log(testDiv[0])
// console.log(testDiv[0].childNodes)
// console.log(testDiv[0].childNodes[1])
// console.log(testDiv[0].childNodes[1].parentNode.parentNode.parentNode.childNodes)
// console.log(testDiv[0].childNodes[1].parentNode.parentNode.parentNode.childNodes[5])



//--------------------------------------------//
var newDiv = document.getElementById("new-div")

var p = document.createElement("p")
p.innerText = "New P tag"

newDiv.appendChild(p)


function createEl() {
    var h3 = document.createElement('h3')
    h3.innerText = "New H3 Tag"

    newDiv.appendChild(h3)
}
// createEl()

//--------------------------------------------//
var btn = document.getElementById("submit-btn")
btn.addEventListener("click", clickButton)

function clickButton(e) {
    createEl()
}

btn.addEventListener("click",
    function (e) {
        var inputValue = document.getElementById("input").value;
        console.log(inputValue);
    }
)
var input = document.getElementById("input")

input.addEventListener("blur",
    function (e) {
        // console.log("blur event")
        console.log(e.target.value)
    }
)