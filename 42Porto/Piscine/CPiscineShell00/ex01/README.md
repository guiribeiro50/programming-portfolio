# Exercício 01

## Descrição

Este exercício consiste em criar um ficheiro com permissões específicas que reproduza um resultado particular quando listado com o comando `ls -l`.

## Objectivo

Criar um ficheiro chamado `testShell00` no directório de submissão que, quando listado com `ls -l`, apresente as seguintes características:

- Permissões: `-r--r-xr-x`
- Nome do ficheiro: `testShell00`
- Tamanho: 40 bytes

## Instruções de Implementação

1. **Criar o ficheiro** `testShell00` no directório de submissão

2. **Configurar as permissões** para que o resultado de `ls -l` seja:
   ```
   -r--r-xr-x 1 XX XX 40 Jun 1 23:42 testShell00
   ```

3. **Verificar o resultado** executando:
   ```bash
   ls -l
   ```

4. **Criar o arquivo de submissão** executando:
   ```bash
   tar -cf testShell00.tar testShell00
   ```

## Resultado Esperado

Ao executar `ls -l`, o resultado deve apresentar:
- Permissões de leitura para o proprietário (`r--`)
- Permissões de leitura e execução para o grupo (`r-x`)
- Permissões de leitura e execução para outros utilizadores (`r-x`)
- Tamanho do ficheiro: 40 bytes

## Entrega

O ficheiro final a submeter é `testShell00.tar`, criado através do comando `tar` especificado nas instruções.

## Notas Técnicas

- As variáveis "XX" no resultado do `ls -l` representam o proprietário e grupo do ficheiro
- O foco principal está na configuração correcta das permissões e tamanho do ficheiro
- A data e hora podem variar conforme o momento de criação do ficheiro
