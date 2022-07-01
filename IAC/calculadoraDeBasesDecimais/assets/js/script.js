// Recuperar o valor do input ao clicar do no botão

function recoverValueFromButton(id) {
    var numDec = document.getElementById('numberDec').value;
    var num = document.getElementById('number').value;
    switch (id) {
        case 1:
            selectDecimalToOtherBases(numDec);
            break;
        case 2: 
            selectOtherBasesToDecimal(num);
            break;
        default:
            break;
    }
}

// Seletor de qual a base que você deseja transformar o número 
function selectDecimalToOtherBases(num) {
    var select = document.getElementById('base').value;
    var result = '';
    switch (select) {
        case 'bin':
            result = decimalToBases(num, 2);
            break;
        case 'oct':
            result = decimalToBases(num, 8);
            break;
        case 'hexa':
            result = decimalToBases(num, 16);
            break;
        default:
            break;
    }
    console.log(result);
    document.getElementById('newNumber').innerHTML = result;
}

function decimalToBases(num,base) {
    var resto = 0;
    var dividendo = num;
    var i = 0;
    var resultado = '';

    while (i == 0) {
        resto = dividendo % base;
        dividendo = parseInt(dividendo / base);
        if(base === 16) { 
            resto = decimalToHexa(resto);
        }
        resultado += resto;
        if(dividendo < base) {
            i++;
            if (dividendo > 0) {
                resultado += decimalToHexa(dividendo);
            }
        } 
    }
    return inverterNum(resultado);

}

function inverterNum(num) {
    var result='';
    var arr=num.split('');
    for(i=arr.length-1; i>=0; i-- ){
        result+=arr[i];
    }
    return result;
}

function decimalToHexa(numero) {
    
    switch (numero) {
        case 10:
            return 'A';
        case 11:
            return 'B';
        case 12:
            return 'C';
        case 13:
            return 'D';
        case 14:
            return 'E';
        case 15:
            return 'F';
        default:
            return numero;
    }
}


// Seletor de qual a base está o número 
function selectOtherBasesToDecimal(num) {
    var select = document.getElementById('bases').value;
    var result = '';
    switch (select) {
        case 'bina':
            result = numberToDecimal(num, 2);
            break;
        case 'octa':
            result = numberToDecimal(num, 8);
            break;
        case 'hexad':
            result = numberToDecimal(num, 16);
            break;
        default:
            break;
    }
    document.getElementById('newDecimalNumber').innerHTML = result;
}

// Transformar números em qualquer base para decimal
function numberToDecimal(num, base){
    var algarismo = 0;
    var arr = num.split('');
    var resultadoAlgVezesBaseElePos = 0;
    var resultadoFinal = 0;
    var posicao = arr.length-1;
    
    for(i=0;i<arr.length;i++){
        if (base==16){
            algarismo = hexaToDecimal(arr[i]);
        }else {
            algarismo = arr[i];
        }
        resultadoAlgVezesBaseElePos = (algarismo * (base**posicao));
        resultadoFinal += resultadoAlgVezesBaseElePos;
        posicao--;
    }
    return resultadoFinal;
}

// Transforma as letras dos números hexadecimais para números decimais
function hexaToDecimal(letra){
    var num=0;
    switch (letra) {
        case "A":
            num = 10;
            break;
        case "B":
            num = 11;
            break;
        case "C":
            num = 12;
            break;
        case "D":
            num = 13;
            break;
        case "E":
            num = 14;
            break;
        case "F":
            num = 15;
            break;
        default:
            num = letra;
            break;
    }
    return num;
}



