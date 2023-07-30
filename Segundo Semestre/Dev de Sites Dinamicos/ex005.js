//Crie um programa que solicite dois números ao usuário por meio de ‘prompt’. Em seguida,
//calcule a soma dos dois números e exiba o resultado no console utilizando ‘console.info’ com
//a seguinte mensagem “{valor 1} + {valor 2} é igual a {resultado}” onde o resultado deve estar
//em negrito
function soma(){
    var n1 = parseInt(prompt('Digite o primeiro valor'));
    var n2 = parseInt(prompt('Digite o segundo valor'));
    var result = n1 + n2;
    console.info(n1, '+', n2, '=', result);
}