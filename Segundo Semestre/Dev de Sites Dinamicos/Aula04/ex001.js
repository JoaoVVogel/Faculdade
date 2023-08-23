//Crie uma função que solicite ao usuário seu nome através de um input e, em seguida, exiba
//uma mensagem personalizada de boas-vindas na DOM.
function boasVindas(){
    document.getElementById('formulario').addEventListener('submit', function(event){
        event.preventDefault();
    var nome = document.getElementById('nome').value;
    var mensagem = document.createElement('p');
    mensagem.textContent = 'Ola ' +nome;
    document.body.appendChild(mensagem);
    });
}
boasVindas()