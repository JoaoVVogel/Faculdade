//Crie um programa que solicite dois números ao usuário por meio de um formulário. Em
//seguida, calcule a soma dos dois números e exiba o resultado no DOM utilizando com a
//seguinte mensagem “{valor 1} + {valor 2} é igual a {resultado}” onde o resultado deve estar
//em negrito.
document.getElementById('formulario').addEventListener('submit', function(event){
    event.preventDefault();
    var n1 = parseFloat(document.getElementById('n1').value);
    var n2 = parseFloat(document.getElementById('n2').value);
    var soma = n1 + n2;
    var printResultado = document.createElement('p');
    printResultado.innerHTML = '<strong>'+ soma + '</strong>';
    document.body.appendChild(printResultado);


});