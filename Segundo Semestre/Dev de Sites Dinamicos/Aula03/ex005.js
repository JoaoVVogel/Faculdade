//Crie uma função que receba um array de números como parâmetro e retorne o maior
//elemento do array

var numeros = [10, 50, 30, 20];

function maiorNumero(numeros){
    var maior = 0;
    for(var i = 0; i < numeros.length; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
            
        }

    }
    return maior;

}
console.log(maiorNumero(numeros))