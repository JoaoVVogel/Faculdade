fetch('https://run.mocky.io/v3/42827ad8-ce84-42c6-97a7-ea5125a1c6b7', {
            method: "GET"
        })
        .then(function(resposta){
            return resposta.json();
        })
        .then(function(respostaEmJson){
            var noticiaDiv = document.getElementById("minhaDiv");

            respostaEmJson.noticias.forEach(noticia => {
                var card = document.createElement("div");
                
                card.innerHTML =
                    `<h1>${noticia.titulo}</h1>` +
                    `<h3>${noticia.descricao}</h3>` +
                    `<h2>${noticia.data}</h2>` +
                    `<img src="${noticia.imagem}">`;

                noticiaDiv.appendChild(card);
            });
        })
        .catch(function(erro){
            console.error('Erro na requisição:', erro);
        });