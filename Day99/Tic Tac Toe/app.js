let boxes=document.querySelectorAll(".box");
let resetBtn=document.querySelector("#reset-btn");

let newGameBtn=document.querySelector("#new-btn");
let msgConatiner=document.querySelector(".msg-container");
let msg=document.querySelector("#msg");
let turnO =true;    //player X . playerO
let count=0     //tracks the clicks by the user 
const winPatterns=[
    [0,1,2],
    [0,3,6],
    [0,4,8],
    [1,4,7],
    [2,5,8],
    [2,4,6],
    [3,4,5],
    [6,7,8],
];

//reset button functionality
const resetGame =()=>{
    turnO=true;
    count=0;
    EnableBoxes();
    msgConatiner.classList.add("hide"); //winner vali statement hide kardi dubara 
}

boxes.forEach((box)=>{
    box.addEventListener("click",()=>{
        // console.log("box was clicked ");
        if(turnO){
            box.innerText="O";
            box.style.color="green";
            turnO=false;
        }
        else{
            box.innerText="X";
            box.style.color="white";
            turnO=true;
        }
        box.disabled=true;      //DISABLED CANNOT BE CHANGED AGAIN NOW 
        count++;
        let isWinner=checkWinner();
        if(count ===9 && !isWinner){
            gameDraw();
        }
    });
});

const gameDraw =()=>{
    msg.innerText=`It was a Draw`;
    msgConatiner.classList.remove("hide");
    disabledBoxes();
}

//jab ek baar winner agya toh dubara booxes pr click na ho 
const disabledBoxes =()=>{
    for(let box of boxes){
        box.disabled=true;
    }
}

const EnableBoxes =()=>{
    for(let box of boxes){
        box.disabled=false;
        box.innerText="";
    }
}
const showWinner= (winner)=>{       //pos1Val passed as parameter
    msg.innerText=`Congratulations , Winner is ${winner}`;
    msgConatiner.classList.remove("hide");
    disabledBoxes();
};

const checkWinner =()=>{
    for(let patterns of winPatterns){
        let pos1Val= boxes[patterns[0]].innerText;
        let pos2Val= boxes[patterns[1]].innerText;
        let pos3Val= boxes[patterns[2]].innerText;
        if(pos1Val !="" && pos2Val !="" && pos3Val!=""){    //"" means empty 
            if(pos1Val===pos2Val && pos2Val===pos3Val){
                
                showWinner(pos1Val);
            }
        }
        
    }
};

//reset game ki functionality kab kam kare isliye we created a event listner and it will be called when clicked 
newGameBtn.addEventListener("click",resetGame);
resetBtn.addEventListener("click",resetGame);

