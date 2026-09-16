CREATE TABLE cursos (
    id SERIAL PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    carga_horaria INT NOT NULL
);

CREATE TABLE alunos (
    id SERIAL PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    idade INT,
    cidade VARCHAR(50),
    curso_id INT,
    FOREIGN KEY (curso_id) REFERENCES cursos(id)
);

CREATE TABLE alunos_antigos (
    id SERIAL PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    cidade VARCHAR(50)
);

INSERT INTO cursos (nome, carga_horaria) VALUES
('Programação de Sistemas', 1200),
('Redes de Computadores', 1000),
('Banco de Dados', 800),
('Desenvolvimento Web', 1000),
('Internet das Coisas', 600),
('Eletrônica', 800);

INSERT INTO alunos (nome, idade, cidade, curso_id) VALUES
('Ana Silva', 18, 'Curitiba', 1),
('Bruno Santos', 21, 'Londrina', 2),
('Carlos Souza', 19, 'Curitiba', 1),
('Daniel Oliveira', 25, 'Maringá', 3),
('Eduarda Lima', 20, 'Curitiba', 2),
('Felipe Costa', 17, 'Londrina', 1),
('Gabriela Alves', 22, 'Maringá', 3),
('Henrique Rocha', 19, 'Curitiba', 2),
('Isabela Martins', 20, 'Londrina', 1),
('João Pereira', 23, 'Curitiba', 3),
('Karen Mendes', 18, 'Maringá', NULL),
('Lucas Ferreira', 26, 'Curitiba', 2);

INSERT INTO alunos_antigos (nome, cidade) VALUES
('Marcos Lima', 'Curitiba'),
('Patrícia Souza', 'Londrina'),
('Rafael Costa', 'Maringá'),
('Ana Silva', 'Curitiba'),
('Carlos Souza', 'Curitiba');

SELECT * FROM alunos;
SELECT nome FROM alunos;
SELECT * FROM alunos WHERE cidade = 'Curitiba';
SELECT * FROM alunos WHERE idade >= 20;
SELECT a.nome, c.nome FROM alunos AS a INNER JOIN cursos AS c ON a.curso_id = c.id;
SELECT a.nome, a.idade, c.nome FROM alunos AS a INNER JOIN cursos AS c ON a.curso_id = c.id;
SELECT a.nome, a.cidade, c.nome, c.carga_horaria FROM alunos AS a INNER JOIN cursos AS c ON a.curso_id = c.id;
SELECT a.nome, a.cidade, c.nome, c.carga_horaria FROM alunos AS a INNER JOIN cursos AS c ON a.curso_id = c.id;
SELECT a.nome, a.cidade, c.nome FROM alunos AS a INNER JOIN cursos AS c ON a.curso_id = c.id WHERE c.nome = 'Programação de Sistemas';
SELECT a.nome, c.nome, c.carga_horaria FROM alunos AS a INNER JOIN cursos AS c ON a.curso_id = c.id WHERE carga_horaria > 900;
SELECT a.nome AS aluno, c.nome AS curso FROM alunos AS a LEFT JOIN cursos AS c ON a.curso_id = c.id;
12-R:Aluna karen Mendees, por nao ter nenhum curso viculado a ela.
SELECT a.nome, a.cidade, c.nome AS curso, c.nome AS curso FROM alunos AS a LEFT JOIN cursos AS c ON a.curso_id = c.id;
SELECT a.nome AS aluno, c.nome AS curso FROM alunos AS a LEFT JOIN cursos AS c ON a.curso_id = c.id WHERE a.curso_id IS NULL ;
SELECT a.nome, a.cidade, c.nome AS curso, c.nome AS curso FROM alunos AS a LEFT JOIN cursos AS c ON a.curso_id = c.id WHERE a.cidade = 'Curitiba';
SELECT a.nome AS aluno, c.nome AS curso FROM alunos AS a RIGHT JOIN cursos AS c ON a.curso_id = c.id;	
17-R:Sim, Internet das Coisas e Eletronica.
SELECT a.nome, c.carga_horaria , c.nome AS curso FROM alunos AS a RIGHT JOIN cursos AS c ON a.curso_id = c.id;	
19-R: O INNER acha apenas os dados que tem correspondencia entre as duas tabelas, enquanto o LEFT pega todos os dados de determinada tabela.
20-R: Uma posiciona todos os dados da tabela a direita independente de correspondencia, o outro faz a mesma coisa so que para esquerda.
SELECT nome FROM alunos UNION SELECT nome FROM alunos_antigos; 
22-R: Aparecem apenas uma vez, porque quando se utiliza o UNION ele filtra os dados repetidos.
SELECT cidade FROM alunos UNION SELECT cidade FROM alunos_antigos; 
SELECT nome FROM alunos UNION SELECT nome FROM alunos_antigos ORDER BY nome ASC; 
SELECT nome FROM alunos UNION ALL SELECT nome FROM alunos_antigos; 
26-R:O UNION ALL tem mais registros por nao filtrar os repetidos.
27-R:No UNION normal ele filtra as repetiçoes enquanto no ALL ele pega todos os registros.
28-R:JOIN e utilizado para usar tambem outra tabela dentro da sua consulta. O UNION e utilizado para 



