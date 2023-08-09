//Peça ao usuário para digitar uma palavra e conte quantas vogais (A, E, I, O, U) existem na palavra. Exiba o resultado no console.
function vogal(){
    var palavra = prompt('Escreva uma palavra');
    var vetorPalavra = palavra.toLowerCase().split('');
    var vogais = ['a', 'e', 'i', 'o', 'u'];
    var cont = 0;
    for(var i = 0; i < vetorPalavra.length; i++){
        if(vogais.indexOf(vetorPalavra[i]) !== -1){
            cont++;

        }
    }
    if(cont == 0){
        console.log('Sua palavra nao tem vogais');

    }else{
        console.log('Numero de vogais na sua palavra: ' + cont);
    }

}
vogal()