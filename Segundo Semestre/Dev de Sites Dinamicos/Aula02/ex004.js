//Crie um programa que gere uma senha aleatória com uma combinação de letras maiúsculas, minúsculas, números e caracteres especiais. Peça ao usuário para escolher o tamanho da senha.
function senha(){
    var escolha = parseInt(prompt('Digite 1 para gerar uma senha ou 2 para fechar'));
    if(escolha == 1){
        var senhaGerada = Math.random().toString(36).slice(2);
        var senhaComMaiusculas = senhaGerada.charAt(0).toUpperCase() + senhaGerada.slice(1);
        alert('Sua senha é: ' + senhaComMaiusculas);

    }

}
senha()