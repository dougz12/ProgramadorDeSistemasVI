CREATE TABLE alunos (
    id SERIAL PRIMARY KEY,
    nome VARCHAR(100),
    idade INT,
    cidade VARCHAR(50),
    curso VARCHAR(50),
    nota NUMERIC(4,2)
);

INSERT INTO alunos (nome, idade, cidade, curso, nota) VALUES
('Ana Silva', 18, 'Curitiba', 'Programação', 8.5),
('Bruno Santos', 21, 'Londrina', 'Redes', 7.0),
('Carlos Souza', 19, 'Curitiba', 'Programação', 9.0),
('Daniel Oliveira', 25, 'Maringá', 'Banco de Dados', 6.5),
('Eduarda Lima', 20, 'Curitiba', 'Redes', 8.0),
('Felipe Costa', 17, 'Londrina', 'Programação', 5.5),
('Gabriela Alves', 22, 'Maringá', 'Banco de Dados', 9.5),
('Henrique Rocha', 19, 'Curitiba', 'Redes', 7.5),
('Isabela Martins', 20, 'Londrina', 'Programação', 8.8),
('João Pereira', 23, 'Curitiba', 'Banco de Dados', 6.0),
('Karen Mendes', 18, 'Maringá', 'Programação', 9.2),
('Lucas Ferreira', 26, 'Curitiba', 'Redes', 7.8);

select * from alunos;
select nome,cidade from alunos;
select nome, idade +1 as idade_futura from alunos;
select * from alunos where  idade >= 18;
select * from alunos where cidade = 'Curitiba';
select * from alunos where  nota > 8;
select * from alunos where not cidade = 'Curitiba';
select * from alunos where  idade >= 18 and curso = 'Programação';
select * from alunos where cidade = 'Curitiba' or 'Londrina';
select * from alunos where  nota >= 8 and cidade = 'Curitiba';
select * from alunos where  idade BETWEEN 18 and 20;
select * from alunos where  nota BETWEEN 7 and 9;
SELECT * FROM alunos WHERE curso  IN('Programação','Redes');
SELECT * FROM alunos WHERE cidade  IN('Curitiba','Londrina','Maringá');
select * from alunos where nome like 'A%';
select * from alunos where nome like '%a';
select * from alunos where nome like '%Ana%';
select * from alunos where nome ilike 'a%';
select DISTINCT cidade from alunos;
select DISTINCT curso from alunos;
select * from alunos order by nome;
select * from alunos order by nota desc;
select * from alunos order by idade asc;
select * from alunos order by cidade, nome asc;
select * from alunos limit 5;
select * from alunos order by nota desc limit 5 ;
SELECT * FROM alunos ORDER BY nota DESC LIMIT 3 OFFSET 3;








