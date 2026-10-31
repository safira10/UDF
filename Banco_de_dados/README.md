<div align="center">

# 🎓 bd_academico

Banco de dados acadêmico criado em sala de aula na disciplina de **Banco de Dados**.

![SQL](https://img.shields.io/badge/SQL-7C3AED?style=for-the-badge&logo=mysql&logoColor=white&labelColor=0d0d12)
![Tabelas](https://img.shields.io/badge/10_tabelas-C084FC?style=for-the-badge&labelColor=0d0d12)
![UDF](https://img.shields.io/badge/UDF-Engenharia_de_Software-E879F9?style=for-the-badge&labelColor=0d0d12)

</div>

---

## 📖 Sobre

Modelo de um sistema escolar que controla **cursos, turmas, alunos, professores, disciplinas, frequência e notas de provas**. O script cria o banco, as tabelas com chaves primárias e estrangeiras, insere dados de exemplo e termina com `SELECT` em todas as tabelas para conferir o resultado.

---

## 🧱 Tabelas

| Tabela | Descrição | Chave primária |
|:--|:--|:--|
| `CURSO` | Cursos oferecidos | `co_curso` |
| `TURMA` | Turmas de cada curso, com ano, período, datas e nº de provas | `co_turma` |
| `ALUNO` | Dados pessoais dos alunos | `co_aluno` |
| `ALUNO_TURMA` | Matrícula do aluno em uma turma | `co_aluno`, `co_turma` |
| `DISCIPLINA` | Disciplinas ministradas | `co_disciplina` |
| `PROFESSOR` | Dados dos professores | `co_professor` |
| `PROF_TURM_DISC` | Qual professor dá qual disciplina em qual turma | `co_professor`, `co_turma`, `co_disciplina` |
| `FREQUENCIA` | Presença (`S`/`N`) por aluno, turma, disciplina e data | `co_aluno`, `co_turma`, `co_disciplina`, `dt_frequencia` |
| `PROVA` | Tipos de prova (Prova 01 a Prova 06) | `co_prova` |
| `AVALIACAO` | Nota de cada aluno em cada prova, por disciplina | `co_disciplina`, `co_aluno`, `co_turma`, `co_prova` |

### 🔗 Chaves estrangeiras

| Tabela | Referencia |
|:--|:--|
| `TURMA` | `CURSO` |
| `ALUNO_TURMA` | `TURMA`, `ALUNO` |
| `FREQUENCIA` | `ALUNO_TURMA`, `DISCIPLINA` |
| `PROF_TURM_DISC` | `PROFESSOR`, `TURMA`, `DISCIPLINA` |
| `AVALIACAO` | `ALUNO_TURMA`, `DISCIPLINA`, `PROVA` |

---

## 🧪 Dados de exemplo

- **2 cursos:** Informática e Patologia
- **12 turmas** entre 2002 e 2003
- **3 disciplinas:** Matemática, Filosofia e Biologia
- **4 professores**
- **6 provas**
- **10 alunos** com matrículas, frequências e notas

---

## ▶️ Como executar

1. Abra o seu cliente SQL (MySQL Workbench, DBeaver etc.).
2. Abra o arquivo `bd_academico.sql`.
3. Execute o script completo.
4. Os `SELECT` do final mostram o conteúdo de cada tabela.

---

## 💡 Consultas para testar

```sql
-- Alunos matriculados por turma
SELECT t.descricao, a.nome
FROM ALUNO_TURMA at
JOIN ALUNO a ON a.co_aluno = at.co_aluno
JOIN TURMA t ON t.co_turma = at.co_turma;

-- Média de notas por aluno e disciplina
SELECT a.nome, d.no_disciplina, AVG(av.nt_avaliacao) AS media
FROM AVALIACAO av
JOIN ALUNO a ON a.co_aluno = av.co_aluno
JOIN DISCIPLINA d ON d.co_disciplina = av.co_disciplina
GROUP BY a.nome, d.no_disciplina;
```

---

<div align="center">

Feito por [Safira](https://github.com/safira10) 💜

</div>
