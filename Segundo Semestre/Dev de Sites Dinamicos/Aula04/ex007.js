//Crie um programa que gere uma senha aleatória com uma combinação de letras maiúsculas,
//minúsculas, números e caracteres especiais. Peça ao usuário para escolher o tamanho da
//senha. Exiba a senha no DOM

const maiusculas = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        const minusculas = "abcdefghijklmnopqrstuvwxyz";
        const numeros = "0123456789";
        const caracteresEspeciais = "!@#$%¨&*ªº°";

        function gerarSenha(tamanho) {
            const caracteresPossiveis = `${maiusculas}${minusculas}${numeros}${caracteresEspeciais}`;
            let senhaGerada = "";
            
            for (let i = 0; i < tamanho; i++) {
                const caractereAleatorio = caracteresPossiveis[Math.floor(Math.random() * caracteresPossiveis.length)];
                senhaGerada += caractereAleatorio;
            }
            
            return senhaGerada;
        }

        window.addEventListener("DOMContentLoaded", () => {
            const input = document.querySelector("#tamanho-senha");
            const gerarSenhaButton = document.querySelector("#gerar-senha");
            const senhaOutput = document.querySelector("#senha");

            gerarSenhaButton.addEventListener("click", () => {
                const tamanhoSenha = parseInt(input.value);
                
                if (isNaN(tamanhoSenha) || tamanhoSenha <= 0) {
                    senhaOutput.textContent = "Digite um tamanho válido!";
                    return;
                }

                const senhaGerada = gerarSenha(tamanhoSenha);
                senhaOutput.textContent = `Senha gerada: ${senhaGerada}`;
            });
        });