Readme.md

# ♟️ Simulação de Movimentos de Peças de Xadrez em C

Este projeto foi desenvolvido como parte do desafio **"Movimentando as Peças do Xadrez – Nível Novato"**, proposto para praticar estruturas de repetição na linguagem C.

## 🧠 Objetivo

Simular o movimento das peças **Torre**, **Bispo** e **Rainha** no tabuleiro de xadrez, utilizando diferentes estruturas de repetição (`for`, `while` e `do-while`). A lógica do jogo completo não é necessária – apenas a simulação dos movimentos em linha reta e diagonal, conforme especificado.

## 🧩 Regras e Estruturas Utilizadas

- Cada peça utiliza uma **estrutura de repetição diferente**:
  - **Torre**: `for`
  - **Bispo**: `while`
  - **Rainha**: `do-while`

- As direções dos movimentos são exibidas no console com `printf()`:
  - `Direita` (Torre)
  - `Cima, Direita` (Bispo - diagonal)
  - `Esquerda` (Rainha)

## 🧪 Funcionamento do Código

- A **Torre** se move 5 casas para a direita.
- O **Bispo** se move 5 casas na diagonal para cima e à direita.
- A **Rainha** se move 8 casas para a esquerda.

Cada movimento é representado com uma linha de texto no console, informando a direção percorrida.

## 📁 Arquivo

- `xadrez.c`: contém todo o código-fonte do projeto, com comentários explicativos.

## ✅ Requisitos Atendidos

- Estruturas de repetição corretamente aplicadas.
- Saídas no console conforme o enunciado.
- Código limpo, comentado e de fácil leitura.
- Nenhuma entrada do usuário necessária (valores definidos via constantes).
- Apenas variáveis do tipo `int` e `string` (char array/`printf`).

## 🚀 Execução

Compile e execute o programa com qualquer compilador C. Exemplo com `gcc`:

```bash
gcc xadrez.c -o xadrez
./xadrez
