-- Uma view que mostra informações completas sobre um ingresso vendido,
-- incluindo nome do cliente, nome do festival, data do evento e valor do ingresso.
create view informacoes_completas
as 
select  c.nome as nome_cliente,
        f.nome as nome_festival, 
        e.data_evento as data_evento,
        i.valor as preco_pago
from    ingressos i
            inner join clientes c 
                on c.id = i.id_cliente
            inner join festivais f
                on f.id = i.id_festival
            inner join festivais_eventos fe
                on fe.id_festival = f.id
            inner join eventos e
                on fe.id_evento = e.id

-- Uma view que mostra informações sobre as atrações de um festival específico, 
-- incluindo nome do festival, nome da atração e horário de início do evento.
create view atracao_dj
as
select  f.nome as nome_festival,
        a.nome_atracao as nome_atracao,
        e.hora_inicio as hora_inicio
from    festivais f 
            inner join festivais_eventos fe 
                on fe.id_festival = f.id
            inner join eventos e 
                on e.id = fe.id_evento
            inner join atracoes a
                on a.id_evento = e.id
where   a.nome_atracao like '%DJ 1%'


-- Uma view que mostra informações sobre todos os eventos agendados no Rio de Janeiro,
-- incluindo nome do evento, data e hora do evento e o nome do festival
create view eventos_agendados_RJ
as 
select  e.descricao as evento,
        f.nome as nome_festival,
        e.data_evento as data_evento, 
        e.hora_inicio as hora
from    eventos e 
            inner join festivais_eventos fe 
                on fe.id_evento = e.id
            inner join festivais f 
                on f.id = fe.id_festival
where   f.cidade like '%Rio de Janeiro%' 