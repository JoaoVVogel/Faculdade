//Crie um programa que solicite ao usuário o raio de um círculo por meio de um formulário.
//Em seguida, calcule e exiba a área do círculo no DOM. Formate a mensagem para incluir um
//link que redirecione para um site com a fórmula da área do círculo.

const valor = document.querySelector("input[type='number']");

const submit = document.querySelector("input[type='submit']");

console.log(valor, submit);

submit.addEventListener("click", (evento) =>{
    evento.preventDefault();
    document.write(3.14 * (parseFloat(valor.value)*parseFloat(valor.value)) + " m2");
})