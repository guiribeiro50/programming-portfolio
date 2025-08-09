# Exercício 04

## Descrição

Este exercício consiste em criar um ficheiro `midLS` contendo um comando que lista todos os ficheiros e directórios no directório actual com especificações particulares de formatação e ordenação.

## Objectivo

Criar um ficheiro `midLS` que contenha o comando de linha que:
- Liste todos os ficheiros e directórios no directório actual
- Exclua ficheiros ocultos ou qualquer ficheiro que comece por ponto (incluindo duplo ponto)
- Apresente os resultados separados por vírgula
- Ordene por data de criação
- Adicione uma barra (/) após os nomes dos directórios

## Instruções de Implementação

1. **Criar o ficheiro** `midLS`

2. **Adicionar o comando** que produz a listagem com os critérios especificados

3. **Verificar o resultado** executando o comando contido no ficheiro

## Resultado Esperado

O ficheiro `midLS` deve conter um comando que, quando executado, produza uma listagem:
- Sem ficheiros ocultos (que começam por `.`)
- Separada por vírgulas
- Ordenada por data de criação
- Com directórios identificados por `/` no final do nome

## Entrega

O ficheiro `midLS` deve estar presente no repositório contendo o comando correcto.

## Notas Técnicas

- Ficheiros ocultos incluem todos os que começam por ponto (`.` e `..`)
- A ordenação deve ser por data de criação, não por ordem alfabética
- A formatação com vírgulas deve ser respeitada
- Os directórios devem ter a barra identificativa no final
