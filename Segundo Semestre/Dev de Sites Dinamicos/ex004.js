//Escreva uma função que receba uma string como parâmetro e exiba essa string no console
//em negrito na cor azul.
var mensagem;
function negrito(){
    mensagem = 'Bom Dia!';
    console.log('%c%s', 'color: blue; font-weight: bold;', mensagem);
}
negrito()