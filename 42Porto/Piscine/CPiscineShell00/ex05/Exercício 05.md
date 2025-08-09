# Exercício 05

## Descrição

Este exercício consiste em criar um script shell que apresenta os IDs dos últimos 5 commits do repositório Git.

## Objectivo

Criar um script shell chamado `git_commit.sh` que:
- Apresente os IDs dos últimos 5 commits do repositório Git
- Produza uma saída com um ID por linha
- Funcione correctamente quando testado com `bash git_commit.sh | cat -e`

## Instruções de Implementação

1. **Criar o script** `git_commit.sh`

2. **Implementar a funcionalidade** para obter os IDs dos commits

3. **Testar o script** com o comando especificado

## Resultado Esperado

Quando executado `bash git_commit.sh | cat -e`, o resultado deve ser similar a:
```
baa23b54f0adb7bf42623d6d0a6ed4587e11412a$
2f52d74b1387fa80eea844969e8dc5483b531ac1$
905f53d98656771334f53f59bb984fc29774701f$
5ddc8474f4f15b3fcb72d08fcb333e19c3a27078$
e94d0b448c03ec633f16d84d63beaef9ae7e7be8$
```

## Entrega

O ficheiro `git_commit.sh` deve estar presente no repositório e ser executável.

## Notas Técnicas

- O script deve funcionar em qualquer repositório Git
- Cada ID de commit deve aparecer numa linha separada
- Os IDs mostrados são exemplos - os valores reais dependerão do repositório
- O teste será feito no ambiente próprio do sistema de avaliação
