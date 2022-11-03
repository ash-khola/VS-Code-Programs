// for (var i = 0; i<5; i++) {
//     document.querySelectorAll("button")[i].addEventListener("click", function () {
//             document.querySelector("h1").style.color = "red";

//             setTimeout(function () {
//                 document.querySelector("h1").style.color = "black";
//             }, 100);
//         });
// }

// Note -> while selecting elements using $ sign, then element name needs to be written in quotes except the document.

// $("button").click(function () {
//     $("h1").css("color", "red");

//     setTimeout(() => {
//         $("h1").css("color", "black");
//     }, 100);
// });

// $("h1").before("<button>New</button>");
// $("h1").after("<button>New</button>");
// $("h1").prepend("<button>New</button>");
// $("h1").append("<button>New</button>");

$("button").on("click", function () {
    $("h1").slideUp().slideDown().animate({opacity: "50%"})
});