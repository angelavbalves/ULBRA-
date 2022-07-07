$(document).ready(() => {

    $('section').load('pages/home.html');
    $('.menuHome').addClass('active');

    function clearClass(params) {
        $('.menuHome').removeClass('active');
        $('.menuHistoria').removeClass('active');
        $('.menuDados').removeClass('active');
        $('.menuRecado').removeClass('active');
        $('.menuColecao').removeClass('active');
        $('.menuPoliticas').removeClass('active');
    }

    $('.menuHome').click(() => {
        clearClass();
        $('.menuHome').addClass('active');
        $('section').load('pages/home.html');
    })

    $('.menuHistoria').click(() => {
        clearClass();
        $('.menuHistoria').addClass('active');
        $('section').load('pages/historia.html');
    })

    $('.menuDados').click(() => {
        clearClass();
        $('.menuDados').addClass('active');
        $('section').load('pages/contato.html');
    })

    $('.menuRecado').click(() => {
        clearClass();
        $('.menuRecado').addClass('active');
        $('section').load('pages/recado.html');
    })

    $('.menuColecao').click(() => {
        clearClass();
        $('.menuColecao').addClass('active');
        $('section').load('pages/colecao.html');
    })

    $('.menuPoliticas').click(() => {
        clearClass();
        $('.menuPoliticas').addClass('active');
        $('section').load('pages/politicas.html');
    })
})

var contadorDatas = new Date("August 15, 2022 15:37:25").getTime();

var x = setInterval(function() {
    var dataAtual = new Date().getTime();
    var intervalo = contadorDatas - dataAtual;

    var dias = Math.floor(intervalo / (1000 * 60 * 60 * 24));
    var horas = Math.floor((intervalo % (1000 * 60 * 60 * 24)) / (1000 * 60 * 60));
    var minutos = Math.floor((intervalo % (1000 * 60 * 60)) / (1000 * 60));
    var segundos = Math.floor((intervalo % (1000 * 60)) / 1000);
    if(segundos < 10) {
        segundos = "0" + segundos;
    }
    if(minutos < 10) {
        minutos = "0" + minutos;
    }
    
  document.getElementById("dia").innerHTML = dias;
  document.getElementById("hora").innerHTML = horas;
  document.getElementById("minuto").innerHTML = minutos;
  document.getElementById("segundo").innerHTML = segundos;

  if (intervalo < 0) {
    clearInterval(x);
    document.getElementById("dia").innerHTML = "Promoção encerrada";
  }

}, 1000);

function verificar() {
    var nome = document.getElementById("nome").value;
    var emailCliente = document.getElementById("meuemail").value;
    var mensagem = document.getElementById("mensagem").value;
    if(nome == "" || nome.length < 3) {
        alert("Nome não informado");
    } 
    if (emailCliente == '' || !isEmail(emailCliente)) {
        alert('Email inválido, digite novamente');
    }
    if (mensagem == "" || mensagem.length < 3) {
        alert("Você não digitou uma mensagem");
    }
    if (nome != "" && nome.length > 3 && 
        emailCliente != '' && isEmail(emailCliente) && 
        mensagem != "" && mensagem.length > 3 ) {
            abrirModal()
    }
}

function abrirModal() {
    let modal = document.querySelector('.modal');
    modal.style.display = 'block';
    console.log("Testando funcao")
}

function esconderModal() {
    let modal = document.querySelector('.modal');
    modal.style.display = 'none';
}

function isEmail(email) {
    return /^(?:[a-z0-9!#$%&'*+/=?^_`{|}~-]+(?:\.[a-z0-9!#$%&'*+/=?^_`{|}~-]+)*|"(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21\x23-\x5b\x5d-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])*")@(?:(?:[a-z0-9](?:[a-z0-9-]*[a-z0-9])?\.)+[a-z0-9](?:[a-z0-9-]*[a-z0-9])?|\[(?:(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.){3}(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?|[a-z0-9-]*[a-z0-9]:(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21-\x5a\x53-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])+)\])/.test(email)
}


