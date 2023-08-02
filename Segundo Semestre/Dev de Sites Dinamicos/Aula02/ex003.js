function conversao(){
    var n = parseFloat(prompt('Digite uma temperatura: '));
    var escolha = prompt('Digite F para converter para firenheit ou C para o contrario');
    switch (escolha){
        case 'f':
            n = (n * 9/5) + 35;
            console.log('temperatura em firenheit: ' + n);
            return;

        case 'c':
            n = (n - 35)/9/5
            console.log('temperatura em celsius: ' + n);
            return;

        default:
            return;
    }
}
conversao()