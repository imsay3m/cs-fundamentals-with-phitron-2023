let activeTabId
//loading category data
const loadCategory = async () => {
    try {
        const response = await fetch("https://openapi.programming-hero.com/api/videos/categories");
        const categories = await response.json();
        displayCategory(categories.data);
    } catch (err) {
        console.log(err.message);
        console.log(err);
    }
};


//loading video data
const loadData = async (category_id = 1000) => {
    activeTabId = category_id
    try {
        const response = await fetch(`https://openapi.programming-hero.com/api/videos/category/${category_id}`)
        const data = await response.json()
        displayData(data.data)
    } catch (err) {
        console.log(err.message);
        console.log(err)
    }
};

//displaying catagories
const displayCategory = (categories) => {
    const categoryOption = document.getElementById("category-option")
    categories.forEach((data) => {
        const categoryBox = document.createElement("div")
        categoryBox.id = data.category_id
        activeTabId = data.category_id
        if (categoryBox.id == 1000) {
            categoryBox.innerHTML = `
            <button
                class="category-btn lg:py-2 lg:px-5 py-1 px-3 rounded bg-secondery text-[#171717b3] font-medium hover:text-white focus:bg-primary focus:text-white" id=${data.category_id} onclick=loadData(${data.category_id})>
                ${data.category} 
            </button>
        `
        } else {
            categoryBox.innerHTML = `
            <button
                class="category-btn lg:py-2 lg:px-5 py-1 px-3 rounded bg-secondery text-[#171717b3] font-medium hover:text-black focus:bg-primary focus:text-white" id=${data.category_id} onclick=loadData(${data.category_id})>
                ${data.category}
            </button>
        `
        }

        categoryOption.appendChild(categoryBox)
    });
    loadData()
    activeTabId = 1000
}


// displaying catagories data/videos
const displayData = (videoData) => {
    const categoryVideos = document.getElementById("category-videos")
    categoryVideos.innerText = ''
    const noContent = document.getElementById("no-content-section")
    noContent.innerText = ''
    if (videoData.length === 0) {

        const noContentBox = document.createElement("div")
        noContentBox.classList = `flex flex-col flex-wrap justify-center items-center gap-y-8`
        noContentBox.innerHTML = `
                <div>
                    <img src="assets/body/no-content.png" alt="">
                </div>
                <p class="w-80 text-[#171717] font-bold text-3xl text-center">Oops!! Sorry, There is no content here</p>
        `
        noContent.appendChild(noContentBox)
    }
    else {
        videoData.forEach((video) => {
            const { thumbnail, title } = video;
            const profilePic = video.authors[0].profile_picture
            const profileName = video.authors[0].profile_name
            let verified = video.authors[0].verified
            if (verified) {
                verified = `<img src='assets/body/verified-icon.png'>`;
            } else {
                verified = '';
            }
            const views = video.others.views
            let postDate = video.others.posted_date
            if (postDate == '') {
                postDate = ''
            } else {
                const hr = Math.round(postDate / 3600)
                const min = Math.round((postDate % 3600) / 60)
                postDate = `${hr}hrs ${min}min ago`
            }
            const videoCard = document.createElement("div")
            videoCard.classList = `w-[312px] flex flex-col flex-wrap gap-y-5`
            videoCard.innerHTML = `
                <div class=" relative">
                    <img class="rounded-lg w-[312px] h-[200px]" src=${thumbnail} alt="">
                    <div class="absolute bottom-3 right-3">
                        <p class="bg-[#171717] text-white rounded py-1.5 px-1 text-[10px]">${postDate}</p>
                    </div>
                </div>
                <div class="flex flex-row gap-x-3 justify-start items-start">
                    <img class="w-10 h-10 rounded-full" src=${profilePic} alt="">
                    <div class="flex flex-col gap-y-2">
                        <div>
                            <h4 class="font-bold text-base text-[#171717] line-clamp-2">${title}</h4>
                        </div>
                        <div class="flex justify-start items-center gap-x-2">
                            <p class="text-sm text-[#171717b3]">${profileName}</p>
                            ${verified}
                        </div>
                        <div>
                            <p class="text-sm text-[#171717b3]">${views}</p>
                        </div>

                    </div>
                </div>
                `
            categoryVideos.appendChild(videoCard)
        })
    }
}

//sorting catagories data/video
const sortByView = async () => {
    try {
        const res = await fetch(`https://openapi.programming-hero.com/api/videos/category/${activeTabId}`)
        const data = await res.json()
        const activeViewData = data.data
        if (activeViewData.length != 0) {
            const sortedData = activeViewData.sort((v1, v2) => {
                const views1 = parseFloat(v1.others.views);
                const views2 = parseFloat(v2.others.views);
                return views2 - views1;
            }
            );
            displayData(sortedData)
        } else {
            console.log("There Is No Data To Sort")
        }
    } catch (error) {
        console.log(error.message)
        console.log(error)
    }
}

loadCategory();
