//Crie uma função que receba um array de números como parâmetro e retorne a soma de
//todos os elementos do array.
var numeros = [10, 10, 10];

function soma(numeros){
    var total = 0;
    for(var i = 0; i < numeros.length; i++){
        total = total + numeros[i];
    }
    return total;

}
console.log(soma(numeros));