//Crie uma função que receba um valor em dólares como parâmetro e converta esse valor para
//reais. Solicite ao usuário um valor em dólares por meio de ‘prompt’ e exiba o resultado
//utilizando ‘alert’.
function dolar(){
    var dolar = parseFloat(prompt('Digite um valor em dolar para converter em real:'));
    var real = dolar * 4.77;
    var arredondado = parseFloat(real.toFixed(2));
    alert('Na cotacao atual e equivalente a: R$' + arredondado);
}
dolar()