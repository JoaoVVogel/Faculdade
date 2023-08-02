//Crie um programa que solicite ao usuário o raio de um círculo por meio de ‘prompt’. Em
//seguida, calcule e exiba a área do círculo utilizando ‘console.info’. Formate a mensagem para
//incluir um link que redirecione para um site com a fórmula da área do círculo.
function circulo(){
    var raio = parseFloat(prompt('Digite um raio para o circulo'));
    var area = 3.14*(raio * raio);
    alert('Area do circulo: ' + area);
    //Permitir pop-up para conseguir abrir outra guia...
    if (window.confirm('Ok para ver pagina da formula, Cancelar para continuar aqui')){
    window.open('https://pt.khanacademy.org/math/basic-geo/x7fa91416:circles-cylinders-cones-and-spheres/x7fa91416:area-and-circumference-of-circles/v/area-of-a-circle#:~:text=A%20%C3%A1rea%20de%20um%20c%C3%ADrculo,souber%20a%20medida%20do%20di%C3%A2metro.', '_blank');
    };
}
circulo()