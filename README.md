# Beecrowd Alg1 - Organização Modular de Exercícios 🚀

# 🚨 ATENÇÃO URGENTE 🚨

**Este projeto foi adaptado para rodar de forma modular, com menus e múltiplos arquivos.**

➡️ **NÃO FUNCIONA DIRETAMENTE NO BEECROWD!**

Se você copiar e colar o código de um exercício daqui para o Beecrowd, ele NÃO será aceito, pois depende de menus, includes personalizados e organização modular. Para submeter no Beecrowd, adapte o código para um único arquivo, sem menus ou includes personalizados.

---

⚠️ Aviso Importante

Este repositório foi adaptado para rodar de forma modular, com menus e organização em múltiplos arquivos. Por isso, **NÃO FUNCIONARÁ diretamente no Beecrowd** se você apenas copiar e colar o código de um exercício. Para submeter no Beecrowd, adapte o código para o formato solicitado pela plataforma (um único arquivo, sem menus ou includes personalizados).

Este projeto reúne soluções para diversos exercícios do Beecrowd (URI Online Judge), organizados de forma modular e didática para facilitar o estudo de Algoritmos 1. O objetivo é servir como referência para estudantes, professores e interessados em programação estruturada em C.

## 🗂️ Estrutura do Projeto

O projeto está dividido em quatro grandes módulos, cada um com seu próprio menu e exercícios:

- **🟦 Vetores** (`vetores/`)
- **🟩 Matrizes** (`matrizes/`)
- **🟨 Funções** (`funcoes/`)
- **🟧 Ponteiros** (`ponteiros/`)

Cada módulo possui:
- Um menu próprio (`menu_*.c` e `menu_*.h`) para navegação entre os exercícios.
- Subpastas para cada exercício, contendo arquivos `.c` (implementação) e `.h` (cabeçalho).
- Imagens ilustrativas dos enunciados em `imagens/` (opcional, para consulta visual).

O arquivo `main.c` na raiz do projeto apresenta o menu principal, permitindo acessar qualquer módulo.

## ⚙️ Como Compilar

Você pode compilar o projeto inteiro ou apenas um módulo/exercício específico. Exemplo para compilar o menu principal (usando gcc):

```sh
gcc main.c vetores/menu_vetores.c matrizes/menu_matrizes.c funcoes/menu_funcoes.c ponteiros/menu_ponteiros.c \
    vetores/1174\ -\ Seleçao\ em\ Vetor\ I/selecao_vetor_I.c ... \
    -o beecrowd_alg1.exe
```

💡 Dica: Use um ambiente como CLion, Code::Blocks ou VSCode para facilitar a configuração dos includes e paths.

## 🧩 Organização dos Exercícios

Cada exercício está modularizado:
- **Exemplo:**
  - `vetores/1174 - Seleçao em Vetor I/selecao_vetor_I.c` (implementação)
  - `vetores/1174 - Seleçao em Vetor I/selecao_vetor_I.h` (cabeçalho)
- O menu do módulo importa o cabeçalho e chama a função do exercício.
- O menu principal chama o menu do módulo.

## ▶️ Como Usar

1. Compile o projeto.
2. Execute o binário gerado.
3. Navegue pelo menu principal e escolha o módulo desejado.
4. Dentro do módulo, escolha o exercício para executar.
5. Siga as instruções de entrada/saída conforme o enunciado do Beecrowd.

## 📋 Exercícios Disponíveis

### 🟦 Vetores
- 1174 - Seleção em Vetor I
- 1175 - Troca em Vetor I
- 1176 - Fibonacci em Vetor
- 1177 - Preenchimento de Vetor I
- 1178 - Preenchimento de Vetor II

### 🟩 Matrizes
- 1180 - Menor e Posição
- 1181 - Linha na Matriz
- 1182 - Coluna na Matriz
- 1183 - Acima da Diagonal Principal
- 1184 - Abaixo da Diagonal Principal

### 🟨 Funções
- 1013 - O Maior
- 1047 - Tempo de Jogo com Minutos
- 1151 - Fibonacci Fácil
- 1153 - Fatorial Simples
- 1165 - Número Primo

### 🟧 Ponteiros
- 1020 - Idade em Dias
- 1021 - Notas e Moedas
- 1040 - Média 3
- 1074 - Par ou Ímpar
- 1173 - Preenchimento de Vetor II

## ℹ️ Observações

- Todos os exercícios seguem o padrão de entrada/saída do Beecrowd.
- O projeto é totalmente modularizado, facilitando manutenção e expansão.
- As soluções usam boas práticas de programação em C, incluindo uso de ponteiros quando solicitado.

## 👥 Créditos

- Exercícios adaptados do [Beecrowd (URI Online Judge)](https://www.beecrowd.com.br/)
- Organização e modulação inspiradas em práticas didáticas para ensino de Algoritmos 1.

---

Se encontrar algum erro ou quiser sugerir melhorias, fique à vontade para contribuir! 😃
