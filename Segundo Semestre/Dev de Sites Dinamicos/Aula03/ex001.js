//Crie uma função que receba o nome e a idade de uma pessoa e retorne uma mensagem
//formatada usando template strings informando o nome e a idade da pessoa.

function pessoa(){
    var nome = prompt('Digite seu nome:');
    var idade = parseInt(prompt('Digite sua idade:'));
    alert(`Seu nome é: ${nome}\n Você tem ${idade} anos!`);

}
pessoa()