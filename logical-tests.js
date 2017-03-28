var m = 15;
var f1 = 16;
var f2 = 65;
var o = 18;

function test(t){
  if (t < 16)
    console.log("não eleitor");
  if (t >= 16 && t <18 | t >= 65)
    console.log("facultativo");
  if (t >= 18 && t < 65)
    console.log("eleitor obrigatório")
}

test(m);
test(f1);
test(f2);
test(o);
