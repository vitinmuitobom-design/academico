CREATE DATABASE db_reservaCarros;
USE db_reservaCarros;

CREATE TABLE  tb_cliente(
    id_cliente int  AUTO_INCREMENT PRIMARY KEY,
    cnh VARCHAR(20) not null,
    nome VARCHAR(100) not null,
    validade_cnh date not null,
    categoria_cnh char(2) not null
);

CREATE TABLE tb_classe (
    id_classe int AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) not null ,
    valor_diaria DECIMAL(10,2) not null
);

CREATE TABLE tb_sede(
    id_sede int AUTO_INCREMENT PRIMARY KEY,
    nome varchar(100) not null,
    endereco VARCHAR(100) not NULL,
    telefone varchar(100),
    nome_gerente varchar(100)
);

CREATE TABLE tb_carro(
    id_carro int AUTO_INCREMENT PRIMARY KEY,
    placa varchar(100) not null ,
    modelo varchar(100) not null,
    ano int not null,
    cor varchar(30),
    quilometragem int default 0,
    descricao varchar(200),
    situacao varchar(30) not null,

    id_classe int not null,
    id_sede int not null,

    foreign key (id_classe) references tb_classe(id_classe),
    foreign key (id_sede)  references  tb_sede(id_sede)
 
);

CREATE TABLE tb_reserva(
    numero int AUTO_INCREMENT PRIMARY KEY,
    data_loc date not null,
    data_retorno date not null,
    diarias int not null,
    km_rodados int DEFAULT 0,
    multa decimal(10,2) DEFAULT 0,
    situacao varchar(30),
    total decimal(10,2) not null,

    id_cliente int not null,
    id_carro int not null,

    foreign key (id_cliente) references tb_cliente(id_cliente),
    foreign key (id_carro) references tb_carro(id_carro)
);

