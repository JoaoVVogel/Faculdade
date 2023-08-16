//Crie uma função que receba um array de números como parâmetro e retorne true se todos
//os elementos do array forem números pares, caso contrário, retorne false.
var numeros = [10,10,10,10,10];

function paresImpares(numeros){
    var verificacao;
    var cont = 0;
    for(var i = 0; i < numeros.length; i++){
        if(numeros[i] % 2 == 0){
            cont++
        }

    }
    if(cont == numeros.length){
        verificacao = true;
    }else{
        verificacao = false;
    }
    if(verificacao){
        console.log('todos sao pares')
    }else {
        console.log('Nem todos sao pares')
    }
}