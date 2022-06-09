
// Declarar uma variável, atribuir um valor numérico a ela. Mostrar o valor e o tipo. Teste todos os tipos vistos em sala de aula.

var numberEx = 5;

console.log(numberEx);
console.log(typeof numberEx)

console.log("----------------");

var numberEx2 = 2.6;

console.log(numberEx2);
console.log(typeof numberEx2)

console.log("----------------");

var stringEx = "Árvore";
console.log(stringEx);
console.log(typeof stringEx);

console.log("----------------");

var bool = false;
console.log(bool);
console.log(typeof bool);

console.log("----------------");

var semValorDefinido;
console.log(semValorDefinido);
console.log(typeof semValorDefinido);

console.log("----------------");

var arrayNomes = ["Cássio", "Ramon", "Vinícius"];
console.log(arrayNomes);
console.log(typeof arrayNomes)

console.log("----------------------------------");

// 5. Imprima a média aritmética de 3 números.

const pMedia = document.querySelector("media")
function calcularMedia() {
    var media = 0;

    var stringA = prompt("Digite o primeiro número: ");
        if (stringA!=null) {
            var valor1 = parseFloat(stringA);
        }
        
    var stringB = prompt("Digite o segundo número: ");
        if (stringB!=null) {
            var valor2 = parseFloat(stringB);
        }
    
    var stringC = prompt("Digite o terceiro número: ");
        if (stringC!=null) {
            var valor3 = parseFloat(stringC);
        }
    
    media = (valor1 + valor2 + valor3)/3;
    console.log(media);
    alert("A média é " + media);
} 

console.log("----------------------------------");
// 6. Simule as notas de um aluno da Ulbra. AP1, AP2, AS e média final.

function calcularNota() {
    var mediaUlbra = 0;
    var nota1 = 0, nota2 = 0, nota3 = 0

    var string1 = prompt("Digite a nota da AP1: ");
    if(string1 != null) {
        nota1 = parseFloat(string1);
        while (nota1 > 1.5 || nota1 < 0) {
            console.log("Nota inválida, tente novamente um valor inferior a 1.5\n");
            string1 = prompt("Nota inválida. Digite a nota da AP1 novamente: ")
            if (string1 <= 1.5) {
                nota1 = parseFloat(string1);
            }
        }
    } 

    var string2 = prompt("Digite a nota da AP2: ");
        if(string2 != null) {
            nota2 = parseFloat(string2);
            while (nota2 > 2.5 || nota2 < 0) {
                console.log("Nota inválida, tente novamente um valor inferior a 2.5\n");
                string2 = prompt("Digite a nota da AP2 novamente: ")
                if (string2 <= 2.5) {
                    nota2 = parseFloat(string2);
                }
            }
        }

    var string3 = prompt("Digite a nota da AS: ");
    if (string3 != null) {
        nota3 = parseFloat(string3);
        var isInvalidGrade = (nota3 > 6 || nota3 < 0)
        var isValidGrade = (string3 <= 6 && string3 > 0)
        while (isInvalidGrade) {
            console.log("Nota inválida, tente novamente um valor inferior a 6\n");
            string3 = prompt("Digite a nota da AS novamente: ")
            if (isValidGrade) {
                nota3 = parseFloat(string3);
            }
        }
    }

    mediaUlbra = nota1 + nota2 + nota3;
    console.log(mediaUlbra)
    alert("A média final é " + mediaUlbra);
}

console.log("----------------------------------");
//7.  Informe o nome e a idade de uma pessoa e imprima se esta pessoa é maior ou menor de idade.

function maioridade() {
    var nome = prompt("Digite seu nome");
    alert("Seu nome é " + nome);
    var idade = prompt("Digite sua idade:");
    var idadeNumber = parseInt(idade)

    if (idadeNumber >= 18) {
        console.log("Você já atigiu a maioridade")
        alert("Você já atigiu a maioridade")
    } else if (idadeNumber < 18 && idadeNumber > 0) {
        console.log("Você ainda é de menor")
        alert("Você ainda é de menor")
    } else {
        console.log("Idade inválida")
        alert("Idade inválida. Tente novamente")
    }
}

console.log("----------------------------------");
//8. Informe 3 números e mostre qual é o maior.

function maiorNumero() {
    var numerosPrompt = [];
    var numeros = [];
    var maiorNum = 0;

    for (i = 0; i < 3; i++) {
        numerosPrompt[i] = parseFloat(prompt("Digite um número: "));
        if (numerosPrompt != null) {
            if (i == 0) {
                maiorNum = numerosPrompt[i]
            } else if (numerosPrompt[i] > maiorNum) {
                maiorNum = numerosPrompt[i]
            }
        } 
    }
    console.log("O maior número é " + maiorNum);
    alert("O maior número é " + maiorNum);
}
