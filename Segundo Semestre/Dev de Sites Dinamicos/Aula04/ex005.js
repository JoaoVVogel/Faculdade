//Crie um programa que simule um jogo de dados. Peça ao usuário para lançar o dado (gerar
//um número aleatório de 1 a 6) e exiba o resultado no DOM. Repita até que o usuário decida
//parar de jogar.

const rolar = document.querySelector("#rolar");
const parar = document.querySelector("#parar");
const abaResultado = document.querySelector("#resultado")


console.log(rolar, parar)

rolar.addEventListener("click", (evento) => {
    evento.preventDefault();
    const valorDadoAleatorio = Math.floor(Math.random() *6)+1;
    const resultadoDado = document.createElement("p");
    
    resultadoDado.textContent = `Resultado: ${valorDadoAleatorio}`;

    abaResultado.appendChild(resultadoDado);
})

parar.addEventListener("click", () => {
    document.body.innerHTML = "Jogo Finalizado!"
})