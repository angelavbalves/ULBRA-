// Converter de decimal para qualquer base
// Função para recuperar o valor digitado pelo usuário
function recuperarValores() {
    var numDecimal = document.getElementById('numDecimal').value;

    seletorDeDecimal(numDecimal)
}

// Função para definir a operação a partir do seletor
function seletorDeDecimal(numDecimal) {
    var select = document.getElementById('base').value;
    console.log(select);

    var novoNumero = document.getElementById('novoNumero');
    var resultado;
    var arr = [];
    var j = 0;
    switch (select) {
        case 'bin':
            resultado = converterParaQualquerBase(numDecimal, 2);
            for (i = resultado.length - 1; i >= 0; i--) {
                arr[j] = resultado[i];
                var arrResultado = arr.join('');
                novoNumero.innerHTML = arrResultado;
                j++;
            }
            console.log(arrResultado);
        break;
        case 'oct':
            resultado = converterParaQualquerBase(numDecimal, 8);
            for (i = resultado.length - 1; i >= 0; i--) {
                arr[j] = resultado[i];
                var arrResultado = arr.join('');
                novoNumero.innerHTML = arrResultado;
                j++;
            }
            console.log(arrResultado);
        break;
        case 'hexa':
            resultado = converterParaQualquerBase(numDecimal, 16);
            for (i = resultado.length - 1; i >= 0; i--) {
                arr[j] = resultado[i];
                    switch (arr[j]) {
                        case 10:
                            arr[j] = 'A';
                            break;
                        case 11:
                            arr[j] = 'B';
                        break;
                        case 12:
                            arr[j] = 'C';
                            break;
                        case 13:
                            arr[j] = 'D';
                            break;
                        case 14:
                            arr[j] = 'E';
                            break;
                        case 15:
                            arr[j] = 'F';
                            break;
                    }
                var arrResultado = arr.join('');
                novoNumero.innerHTML = arrResultado;
                j++;
            }
            console.log();
        break;
        default:
        break;
    }
}

// Fórmula para conversão de um número decimal para qualquer base
function converterParaQualquerBase(algarismo, base) {
    var algarismo = parseFloat(algarismo);
    var resto;
    var arrResultado = [];

    while (algarismo > 0) {
        resto = algarismo % base;
        arrResultado.push(resto);
        algarismo = Math.floor(algarismo/base);
    }
    return arrResultado;
} 

