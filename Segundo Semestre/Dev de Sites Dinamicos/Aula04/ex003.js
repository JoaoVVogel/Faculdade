//Crie um programa que solicite ao usuário um número através de um formulário e exiba o
//dobro desse número no DOM.

var numero = document.querySelector("input[type='number']");

var enviar = document.querySelector("input[type='submit']");

enviar.addEventListener("click", (evento)=>{
    evento.preventDefault();
    document.body.innerHTML += `O Dobro é ${parseInt(numero.value *2)}`
})