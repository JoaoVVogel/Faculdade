//Crie um programa que simule um jogo de dados. Peça ao usuário para lançar o dado (gerar
//um número aleatório de 1 a 6) e exiba o resultado no console. Repita até que o usuário
//decida parar de jogar.
function dado(){
    var escolha = parseInt(prompt('Digite 1 para lançar o dado ou 2 para fechar'));
    if(escolha == 1){
        const rndInt = Math.floor(Math.random() * 6) + 1
        console.log(rndInt)
        dado()
        
    }

}
dado()
