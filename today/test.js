function RenderNumber(value){
    var element = document.getElementById("output");
    element.value+=value;
}

function rm(){
    document.getElementById("output").value=" ";
}

function solve(){
    let x = document.getElementById("output").value;
    let y = eval(x);
    document.getElementById("output").value=y;
}