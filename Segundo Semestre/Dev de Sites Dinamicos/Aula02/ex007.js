//Crie uma calculadora que solicite ao usuário o peso e a altura e calcule o IMC. Exiba a categoria do IMC (abaixo do peso, peso normal, sobrepeso, etc.) usando condicionais.
function calculadora(){
    var peso = parseFloat(prompt('Digite seu peso'));
    var altura = parseFloat(prompt('Digite sua altura'));
    var imc = peso /(altura * altura);

    if(imc < 18.5){
        alert('Classificação: Magreza');

    }else if(imc > 18.5 && imc < 24.9){
        alert('Classificação: Normal');

    }else if(imc > 24.9 && imc < 29.9){
        alert('Classificação: Sobrepeso');

    }else if(imc > 29.9 && imc < 39.9){
        alert('Classificação: Obesidade');

    }else if(imc > 39.9){
        alert('Classificação: Obesidade grau 2');

    }else {
        alert('Procure um medico imediatamente!!!');

    }

}
calculadora()