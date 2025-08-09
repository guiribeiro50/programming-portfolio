# Exercício 03

## Descrição

Este exercício consiste em criar uma chave SSH própria e configurá-la correctamente para permitir o acesso ao repositório Git do servidor.

## Objectivo

Gerar um par de chaves SSH (pública e privada) e configurar o sistema para permitir:
- Adicionar a chave pública ao repositório num ficheiro específico
- Actualizar a chave SSH na intranet para permitir push para o servidor Git

## Instruções de Implementação

1. **Criar a chave SSH**

2. **Adicionar a chave pública ao repositório** num ficheiro chamado `id_rsa_pub`

3. **Actualizar a chave SSH na intranet** para permitir push para o servidor Git

## Resultado Esperado

Após a conclusão:
- Existirá um ficheiro `id_rsa_pub` no repositório contendo a chave pública
- A chave SSH estará configurada na intranet
- Será possível fazer push para o servidor Git sem problemas de autenticação

## Entrega

O ficheiro `id_rsa_pub` deve estar presente no repositório com a chave pública SSH.

## Notas Técnicas

- A chave SSH permite autenticação segura sem necessidade de password
- A chave pública pode ser partilhada, mas a chave privada deve ser mantida segura
- A actualização na intranet é necessária para autorizar o acesso ao servidor Git
- O nome do ficheiro `id_rsa_pub` deve ser respeitado exactamente
