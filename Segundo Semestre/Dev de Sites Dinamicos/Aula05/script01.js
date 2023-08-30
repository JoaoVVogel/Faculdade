fetch('https://run.mocky.io/v3/504cf1b7-6473-4807-8bb3-a94f4d9a313f', {
            method: "GET"
        })
        .then(function(resposta){
            return resposta.json();
        })
        .then(function(respostaEmJson){
            var cidadeDiv = document.getElementById("minhaDiv");

            respostaEmJson.cidades.forEach(cidade => {
                var card = document.createElement("div");
                
                card.innerHTML =
                    `<h3>${cidade.nome}</h3>` +
                    `<h3>${cidade.previsao}</h3>` +
                    `<img src="${cidade.icone}">` +
                    `<h2>temperatura maxima: ${cidade.temperatura_maxima}</h2>` +
                    `<h2>temperatura minima: ${cidade.temperatura_minima}</h2>`;

                cidadeDiv.appendChild(card);
            });
        })
        .catch(function(erro){
            console.error('Erro na requisição:', erro);
        });