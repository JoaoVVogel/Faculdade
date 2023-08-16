//Crie um programa que permite ao usuário adicionar itens a uma lista de compras e exiba a
//lista completa quando ele finalizar.

function listaCompras(){
    var op;
    var contadorLista = 1;
    do{
    var produto = prompt('Digite o nome do produto para adicionar: ');
    console.log('Produto-' +contadorLista, ' ' +produto);
    contadorLista++;
    var op = prompt('Deseja adicionar mais produtos? s/n');
    }while(op == 's' || op == 'S');

}
listaCompras()