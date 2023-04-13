create table clientes
(
    id int primary key auto_increment,
    nome varchar(70) not null,
    telefone varchar(11) not null,
    cpf varchar(14) not null unique, 
    data_nascimento date not null
);

create table festivais
(
    id int primary key auto_increment,
    nome varchar(70) not null,
    cidade varchar(40) not null, 
    UF char(2) not null,
    logradouro varchar(50) not null
);

create table eventos
(
    id int primary key auto_increment,
    descricao varchar(100) not null,
    data_evento date not null,
    hora_inicio time not null,
    hora_fim time not null
);

create table ingressos
(
    id int primary key auto_increment,
    valor decimal(10, 2) not null,
    data_compra timestamp not null,
    nome_usuario varchar(100),
    cpf_usuario varchar(14),
    id_cliente int not null,
    id_festival int not null,
    constraint clientes_fk_ingressos
        foreign key(id_cliente) references clientes(id)
            on delete restrict
            on update cascade,
    constraint festivais_fk_ingressos
        foreign key(id_festival) references festivais(id)
            on delete restrict
            on update cascade
);

create table organizadores
(
    id int primary key auto_increment,
    nome varchar(70) not null,
    telefone varchar(11) not null,
    cnpj varchar(18) not null unique
);

create table palestras
(
    id int primary key auto_increment,
    nome_palestra varchar(70) not null,
    nome_palestrante varchar(70) not null,
    id_evento int not null,
    constraint eventos_fk_palestras
        foreign key(id_evento) references eventos(id)
        on delete restrict
        on update cascade
);

create table shows
(
    id int primary key auto_increment,
    nome_artista varchar(70) not null,
    id_evento int not null,
    constraint eventos_fk_shows
        foreign key(id_evento) references eventos(id)
        on delete restrict
        on update cascade
);

create table atracoes
(
    id int primary key auto_increment,
    nome_atracao varchar(100) not null,
    id_evento int not null,
    constraint eventos_fk_atracoes
        foreign key(id_evento) references eventos(id)
        on delete restrict
        on update cascade
);

create table festivais_eventos
(
    id int primary key auto_increment,
    id_festival int not null, 
    id_evento int not null,
    constraint festivais_fk_festivais_eventos
        foreign key(id_festival) references festivais(id)
            on delete restrict 
            on update cascade,
    constraint eventos_fk_festivais_eventos
        foreign key(id_evento) references eventos(id)
            on delete restrict
            on update cascade
);

create table festivais_organizadores 
(
    id int primary key auto_increment,
    id_organizador int not null,
    id_festival int not null, 
    constraint organizadores_fk_festivais_organizadores
        foreign key(id_organizador) references organizadores(id)
            on delete restrict 
            on update cascade,
    constraint festivais_fk_festivais_organizadores
        foreign key(id_festival) references festivais(id)
            on delete restrict
            on update cascade
);

