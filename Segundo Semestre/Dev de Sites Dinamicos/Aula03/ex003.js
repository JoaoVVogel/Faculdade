//a) Utilize a desestruturação para extrair as propriedades nome, idade e email do objeto usuario
//e armazená-las em variáveis separadas.
//b) Em seguida, utilize a desestruturação para extrair as propriedades cidade, estado e pais do
//objeto endereco e armazená-las em variáveis separadas

const usuario = {
    nome: 'ana',
    idade: 18,
    email: 'ana@hotmail.com',
    endereco: {
        cidade: 'Toledo',
        estado: 'PR',
        pais: 'Brasil'
    }

};
var {dadosUsuario} = usuario;
var {endereco: {cidade, estado, pais}} = usuario;
console.log(dadosUsuario);
console.log(cidade);
console.log(estado);
console.log(pais);