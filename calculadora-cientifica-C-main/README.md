<div align="center">

# 🧮 Operações Matemáticas em C

Quatro programas em C que calculam **cosseno**, **exponencial**, **potência** e **subtração**.

![C](https://img.shields.io/badge/C-7C3AED?style=for-the-badge&logo=c&logoColor=white&labelColor=0d0d12)
![math.h](https://img.shields.io/badge/math.h-C084FC?style=for-the-badge&labelColor=0d0d12)
![UDF](https://img.shields.io/badge/UDF-Engenharia_de_Software-E879F9?style=for-the-badge&labelColor=0d0d12)

</div>

---

## 📖 Sobre

Cada operação fica em um arquivo `.c` próprio, com uma função que faz o cálculo e um `main` que pede os valores ao usuário e mostra o resultado. Os números são lidos como `double`, então aceitam casas decimais.

---

## 📂 Programas

| Arquivo | Operação | Entrada | Função usada |
|:--|:--|:--|:--|
| `cosseno.c` | Cosseno de um ângulo | ângulo em **radianos** | `cos()` |
| `exponencial.c` | e elevado a x | valor de `x` | `exp()` |
| `potencia.c` | Base elevada ao expoente | base e expoente | `pow()` |
| `subtracao.c` | Subtração de dois números | `a` e `b` | operador `-` |

---

## ▶️ Como executar

É preciso ter um compilador C instalado, como o **GCC**.

```bash
gcc cosseno.c -o cosseno -lm
gcc exponencial.c -o exponencial -lm
gcc potencia.c -o potencia -lm
gcc subtracao.c -o subtracao
```

O `-lm` liga a biblioteca de matemática (`math.h`) e é necessário no Linux e no macOS. No Windows com MinGW, normalmente funciona sem ele.

Depois, rode o programa que quiser:

```bash
./cosseno
```

No Windows, use `cosseno.exe` no lugar de `./cosseno`.

---

## 💻 Exemplos

**Cosseno**
```
===== COSSENO =====
Digite o angulo em RADIANOS: 0
Resultado: 1.0000
```

**Exponencial**
```
===== EXPONENCIAL =====
Digite o valor de x: 1
Resultado: 2.7183
```

**Potência**
```
===== PONTECIA =====
Digite a base: 2
Digite o expoente: 10
Resultado: 1024.0000
```

**Subtração**
```
=====SUBTRACAO=====
Digite o valor de a: 10
Digite o valor de b: 4
Resultado: 6
```

---

## 🧠 O que pratiquei

- Criar funções que recebem parâmetros e retornam valores
- Ler dados do teclado com `scanf`
- Usar a biblioteca `math.h`
- Formatar a saída com `printf`

---

<div align="center">

Feito por [Safira](https://github.com/safira10) 💜

</div>
