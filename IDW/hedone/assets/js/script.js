$(document).ready(() => {

    $('section').load('pages/home.html')
    $('.menuHome').addClass('active')

    function clearClass(params) {
        $('.menuHome').removeClass('active')
        $('.menuHistoria').removeClass('active')
        $('.menuDados').removeClass('active')
        $('.menuRecado').removeClass('active')
        $('.menuColecao').removeClass('active')
        $('#botao').removeClass('acitve')
    }

    $('.menuHome').click(() => {
        clearClass()
        $('.menuHome').addClass('active')
        $('section').load('pages/home.html')
    })

    $('.menuHistoria').click(() => {
        clearClass()
        $('.menuHistoria').addClass('active')
        $('section').load('pages/historia.html')
    })

    $('.menuDados').click(() => {
        clearClass()
        $('.menuDados').addClass('active')
        $('section').load('pages/contato.html')
    })

    $('.menuRecado').click(() => {
        clearClass()
        $('.menuRecado').addClass('active')
        $('section').load('pages/recado.html')
    })

    $('.menuColecao').click(() => {
        clearClass()
        $('.menuColecao').addClass('active')
        $('section').load('pages/colecao.html')
    })

    // $("#myForm").submit(() =>  { 
    //     return false
    // });
    
})