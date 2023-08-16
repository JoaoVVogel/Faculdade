//Template string
function ts(){
    var nome = 'joao';
    console.log(`Meu nome ${nome}`)
}
//ts()

//Desestruturação
function desestruturacao(){
    var obj = {
        nome: "joao vitor",
        sobrenome: "vogel",
        idade: 18,
    
    }
    var { nome, ...restante } = obj;
    console.log(restante);

}
//desestruturacao()




