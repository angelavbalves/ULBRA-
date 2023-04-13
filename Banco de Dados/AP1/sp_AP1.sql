--- Receber o ID de um cliente como parâmetro e retornar todas as informações relacionadas a esse cliente,
--- incluindo seus ingressos comprados e os eventos associados a esses ingressos.

DELIMITER $$
CREATE  PROCEDURE buscar_dados_por_id(p_id int)
BEGIN 
    SELECT  c.nome as nome_cliente, 
            c.telefone as telefone,
            c.cpf as cpf_cliente, 
            c.data_nascimento as data_nascimento, 
            e.descricao as evento
    FROM    clientes c 
                left join ingressos i 
                    on c.id = i.id_cliente
                left join festivais f
                    on f.id = i.id_festival
                left join  festivais_eventos fe
                    on fe.id_festival = f.id
                left join eventos e 
                    on fe.id_evento = e.id
    WHERE   c.id = p_id;
END $$
DELIMITER ;

call buscar_dados_por_id(23)

-- Listar todos os ingressos comprados por um cliente com base no seu CPF
DELIMITER $$
CREATE PROCEDURE ingressos_por_cpf(p_cpf_cliente VARCHAR(14))
BEGIN
    SELECT i.id, i.valor, i.data_compra, f.nome, e.descricao 
    FROM ingressos i
    INNER JOIN clientes c ON i.id_cliente = c.id
    INNER JOIN festivais f ON i.id_festival = f.id
    INNER JOIN eventos e ON f.id = e.id
    WHERE c.cpf = p_cpf_cliente;
END $$

DELIMITER ;

call ingressos_por_cpf("123.456.789-00")

-- Deletar ingresso por id
DELIMITER $$
CREATE PROCEDURE excluir_ingresso(p_ingresso_id INT)
BEGIN
  DELETE FROM ingressos WHERE id = p_ingresso_id;
END $$
DELIMITER ;

--- Deletar Cliente por id
DELIMITER $$
CREATE PROCEDURE excluir_cliente(p_cliente_id INT)
BEGIN
  DELETE FROM clientes WHERE id = p_cliente_id;
END $$
DELIMITER ;

-- Inserir Cliente 
DELIMITER $$
CREATE PROCEDURE inserir_cliente(p_nome varchar(70), p_telefone varchar(11), p_cpf varchar(14), p_data_nascimento date)
BEGIN
    INSERT INTO
        clientes (nome, telefone, cpf, data_nascimento) 
    VALUES
        (p_nome, p_telefone, p_cpf, p_data_nascimento);
END $$
DELIMITER ;

call inserir_cliente('Angela Alves', '51981009791', '045.422.422-00', '2001-05-16')

--- Alterar cliente 
DELIMITER $$
CREATE PROCEDURE alterar_cliente(p_id_cliente int, p_nome varchar(70), p_telefone varchar(11), p_cpf varchar(14), p_data_nascimento date)
BEGIN
    UPDATE clientes 
        SET nome = p_nome, 
            telefone = p_telefone,
            cpf = p_cpf
            data_nascimento = p_data_nascimento
        WHERE id = p_id_cliente
END $$
DELIMITER ;

call alterar_cliente(51, 'Angela', '12345678910', '000.422.422-00', '2001-06-16');