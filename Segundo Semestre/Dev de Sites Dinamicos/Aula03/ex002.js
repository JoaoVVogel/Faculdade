//Crie uma função que receba o nome de um aluno e suas notas em três disciplinas diferentes.
//Em seguida, calcule a média das notas e retorne uma mensagem usando template strings,
//informando o nome do aluno, suas notas e a média calculada.

function alunos(){
    var nomeAluno = prompt('Digite o nome do aluno');
    var n1 = parseFloat(prompt('Digite a nota da primeira materia:'));
    var n2 = parseFloat(prompt('Digite a nota da segunda materia:'));
    var n3 = parseFloat(prompt('Digite a nota da terceira materia:'));
    var media = (n1 + n2 + n3) / 3;
    alert(`A media do aluno ${nomeAluno} é ${media} nas tres materias`);

}
alunos()