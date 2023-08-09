//Peça ao usuário para digitar vários números e, em seguida, calcule a média desses números. Exiba o resultado no console.
function media(numeros){
    var escolha = parseFloat(prompt('Escolha quantos valores quer digitar para fazer sua media'));
    for(var i = 0; i < escolha; i++){
        numeros = parseFloat(prompt('Digite um numero'));
        var soma = 0;
        soma += n[i];

    }
    var media = soma / escolha;
    alert('A media dos valores é: ' + media);

}
media()