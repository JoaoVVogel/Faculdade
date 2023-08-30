//Crie uma função que converta uma temperatura de Celsius para Fahrenheit ou vice-versa,
//dependendo da escolha do usuário. Exiba o resultado no DOM.

const input = document.querySelector('input');
console.log(input);

const unidadeMedida = document.querySelector('#uniMedida')
console.log(unidadeMedida);

const resultado = document.querySelector("#resultado");
var option = unidadeMedida.options[unidadeMedida.selectedIndex].value;

input.addEventListener("change", () => {
    var option = unidadeMedida.options[unidadeMedida.selectedIndex].value;
    console.log("teste")
    if(option == 'Fahrenheit'){
        valorConvertido = (parseFloat(input.value) - 32) / 1.8
        console.log(valorConvertido)
        resultado.innerHTML = `<p>Resultado: ${valorConvertido} Celsius!</p>`;
    } else{
        valorConvertido = (parseFloat(input.value) * 1.8) + 32
        console.log(valorConvertido)
        resultado.innerHTML = `<p>Resultado: ${valorConvertido} Fahrenheit!</p>`;
    }
})

unidadeMedida.addEventListener("change", () => {
    var option = unidadeMedida.options[unidadeMedida.selectedIndex].value;
    console.log("teste")
    if(option == 'Fahrenheit'){
        valorConvertido = (parseFloat(input.value) - 32) / 1.8
        console.log(valorConvertido)
        resultado.innerHTML = `<p>Resultado: ${valorConvertido} Celsius!</p>`;
    } else{
        valorConvertido = (parseFloat(input.value) * 1.8) + 32
        console.log(valorConvertido)
        resultado.innerHTML = `<p>Resultado: ${valorConvertido} Fahrenheit!</p>`;
    }
})