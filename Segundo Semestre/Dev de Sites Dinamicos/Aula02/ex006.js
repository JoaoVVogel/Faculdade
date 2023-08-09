//Peça ao usuário para inserir uma senha e utilize um loop para verificar se ela atende aos critérios de segurança (por exemplo, contém pelo menos uma letra maiúscula, um número e um caractere especial).
function verificarSenha(){
    var senhaInserida = prompt('Digite sua senha:');
    var numeros = 0;
    var maiuscula = 0;
    for(var i = 0; i < senhaInserida.length; i++){
        if(/[A-Z]/.test(senhaInserida[i])){
            maiuscula++;

        }
        
        if(/[0-9]/.test(senhaInserida[i])){
            numeros++

        }

    }
    if(numeros === 0 && maiuscula === 0) {
        alert('Sua senha deve ter no minimo um numero ou um caracter maiusculo');

    }else {
        alert('Senha valida');
    }
}
verificarSenha()