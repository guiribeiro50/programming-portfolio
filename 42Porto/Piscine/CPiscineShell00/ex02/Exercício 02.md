# Exercício 02

## Descrição

Este exercício consiste em criar ficheiros e directórios com permissões específicas que reproduzam um resultado particular quando listados com o comando `ls -l`.

## Objectivo

Criar os seguintes ficheiros e directórios que, quando listados com `ls -l`, apresentem estas características:

- `test0` - Directório com permissões `drwx--xr-x`
- `test1` - Ficheiro com permissões `-rwx--xr--` e tamanho 4 bytes
- `test2` - Directório com permissões `dr-x---r--`
- `test3` - Ficheiro com permissões `-r-----r--` e tamanho 1 byte
- `test4` - Ficheiro com permissões `-rw-r----x` e tamanho 2 bytes
- `test5` - Ficheiro com permissões `-r-----r--` e tamanho 1 byte
- `test6` - Link simbólico apontando para `test0`

## Instruções de Implementação

1. **Criar os ficheiros e directórios** necessários

2. **Configurar as permissões** para que o resultado de `ls -l` seja:
   ```
   total XX
   drwx--xr-x 2 XX XX XX Jun 1 20:47 test0
   -rwx--xr-- 1 XX XX 4 Jun 1 21:46 test1
   dr-x---r-- 2 XX XX XX Jun 1 22:45 test2
   -r-----r-- 2 XX XX 1 Jun 1 23:44 test3
   -rw-r----x 1 XX XX 2 Jun 1 23:43 test4
   -r-----r-- 2 XX XX 1 Jun 1 23:44 test5
   lrwxr-xr-x 1 XX XX 5 Jun 1 22:20 test6 -> test0
   ```

3. **Verificar o resultado** executando:
   ```bash
   ls -l
   ```

4. **Criar o arquivo de submissão** executando:
   ```bash
   tar -cf exo2.tar *
   ```

## Resultado Esperado

Ao executar `ls -l`, o resultado deve apresentar exactamente a estrutura mostrada acima, com:
- Dois directórios (`test0` e `test2`)
- Quatro ficheiros regulares (`test1`, `test3`, `test4`, `test5`)
- Um link simbólico (`test6`)
- Permissões específicas para cada elemento
- Tamanhos correctos para os ficheiros

## Entrega

O ficheiro final a submeter é `exo2.tar`, criado através do comando `tar` especificado nas instruções.

## Notas Técnicas

- As variáveis "XX" no resultado do `ls -l` representam valores do sistema
- Os tamanhos dos ficheiros devem corresponder exactamente aos especificados
- O link simbólico deve apontar correctamente para `test0`
- As datas e horas podem variar conforme o momento de criação
