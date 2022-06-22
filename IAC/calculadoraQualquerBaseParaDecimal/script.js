var resultado = 0;

function botaoTransformarNumero() {
    var numero = document.getElementById('numero').value;
    console.log(numero);

    var arrayNumeros = numero.split('').reverse();
    console.log(arrayNumeros);
    seletor(arrayNumeros)
}

function passarDeHexParaDec(base, arrayNumeros) {
    for (var i = 0; i < arrayNumeros.length; i++) {
        switch (arrayNumeros[i]) {
            case 'A':
                var algarismo = 10;
                var posicao = i;
                var formula = algarismo * (Math.pow(base, posicao));
                console.log(formula)
                resultado += formula;
                console.log(resultado);
                break;
            case 'B':
                var algarismo = 11;
                var posicao = i;
                var formula = algarismo * (Math.pow(base, posicao));
                console.log(formula)
                resultado += formula;
                console.log(resultado);
                break;
            case 'C':
                var algarismo = 12;
                var posicao = i;
                var formula = algarismo * (Math.pow(base, posicao));
                console.log(formula)
                resultado += formula;
                console.log(resultado);
                break;
            case 'D':
                var algarismo = 13;
                var posicao = i;
                var formula = algarismo * (Math.pow(base, posicao));
                console.log(formula)
                resultado += formula;
                console.log(resultado);
                break;
            case 'E':
                var algarismo = 14;
                var posicao = i;
                var formula = algarismo * (Math.pow(base, posicao));
                console.log(formula)
                resultado += formula;
                console.log(resultado);
                break;
            case 'F':
                var algarismo = 15;
                var posicao = i;
                var formula = algarismo * (Math.pow(base, posicao));
                console.log(formula)
                resultado += formula;
                console.log(resultado);
                break;
            default:
                resultado += formulaParaTransformarNumero(arrayNumeros[i], i, base);
                break;
        }
    }
}

function formulaParaTransformarNumero(algarismoString, posicao, base) {
    var algarismo = parseFloat(algarismoString);
    var formula = algarismo * (Math.pow(base, posicao));
    console.log(formula);
    return formula;
}

function seletor(arrayNumeros) {
    var select = document.getElementById('base').value;
    console.log(select);

    var numeroTransformado = document.getElementById('numeroTransformado');
    
    switch (select) {
        case 'bin':
            for(var i = 0; i < arrayNumeros.length; i++) {
                resultado += formulaParaTransformarNumero(arrayNumeros[i], i, 2);
            }
            numeroTransformado.innerHTML = resultado;
            break;
        case 'oct':
            for(var i = 0; i < arrayNumeros.length; i++) {
                resultado += formulaParaTransformarNumero(arrayNumeros[i], i, 8);
            }
            numeroTransformado.innerHTML = resultado;
            break;
        case 'hexa':
            passarDeHexParaDec(16, arrayNumeros);
            numeroTransformado.innerHTML = resultado; 
            break;
        default:
            break;
    }
    console.log(`Resultado ${resultado}`);
    resultado = 0;
}



