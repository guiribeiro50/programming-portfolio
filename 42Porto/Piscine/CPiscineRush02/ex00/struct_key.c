/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_key.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmichel- <bmichel-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 16:22:20 by bmichel-          #+#    #+#             */
/*   Updated: 2025/08/03 19:51:02 by bmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "funct.h"
#include "struct_key.h"

//Conversão principal e criação do dicionário
void	print_tens_units(t_dict *dict, char *group, int len);


/*
    Esta função cria o dicionário a partir de um array de strings:
    Exemplo de entrada: {"1", "ONE", "2", "TWO"}
    Resultado: dict[0] = {"1", "ONE"}, dict[1] = {"2", "TWO"}

    Esse dicionário é usado para traduzir os números em palavras.
*/
t_dict	*ft_create_dict(char **str, int size)
{
	t_dict	*dict;
	int		i;

	dict = malloc(sizeof(t_dict) * (size + 1)); // +1 para NULL no fim
	if (!dict)
		return (NULL);
	i = 0;
	while (i < size)
	{
		dict[i].key = str[i * 2]; // chave (ex: "1")
		dict[i].value = str[i * 2 + 1]; // valor (ex: "ONE")
		dict[i].size = ft_strlen(str[i * 2]);
		i++;
	}
	// Finaliza o dicionário
	dict[size].key = NULL;
	dict[size].value = NULL;
	dict[size].size = 0;
	return (dict);
}

/*
    Função para encontrar uma chave no dicionário.
    Exemplo:
        Se procurar por "10", retorna o valor "TEN"
*/
t_dict	*find_dict(t_dict *dict, char *key, int size)
{
	int	i;

	i = 0;
	while (dict[i].key)
	{
		if (ft_strcmp(dict[i].key, key) == 0 && dict[i].size == size)
			return (&dict[i]);
		i++;
	}
	return (NULL);
}

/*
    Inicializa parâmetros importantes para a conversão:
    - Tamanho do número
    - Quantos grupos de 3 dígitos haverá
    - etc.
*/
void	init_conversion(char *num, int *params)
{
	params[0] = ft_strlen(num); // tamanho do número
	params[1] = params[0] % 3; // quantos dígitos antes dos primeiros 3
	params[2] = params[0] / 3; // grupos de 3
	params[3] = params[2] + (params[1] > 0); // total de grupos
	params[4] = 0; // flag se já imprimiu algum grupo != 0
}

/*
    Extrai um grupo do número, com tamanho 1 a 3 dígitos.
    Exemplo:
        Número = "123456"
        Grupo extraído = "123", depois "456"
*/
void	extract_group(char *num, char *group, int *idx, int size)
{
	int	j;

	j = 0;
	while (j < size)
	{
		group[j] = num[*idx]; // copia um a um
		(*idx)++;
		j++;
	}
	group[size] = '\0'; // finaliza string
}

/*
    Função principal que converte o número em palavras.
    Passos:
        1. Divide em grupos de 3 dígitos.
        2. Ignora grupos 000.
        3. Imprime o grupo e sua potência (mil, milhão...).
        4. Se o número for zero, trata como caso especial.
*/
void	convert_number(t_dict *dict, char *num)
{
	int		params[5]; // armazena [len, resto, grupos, total grupos, flag]
	int		idx;
	int		i;
	int		size;
	char	group[4];

	i = 0;
	idx = 0;
	init_conversion(num, params);
	while (i < params[3])
	{
		if (i == 0 && params[1])
			size = params[1];
		else
			size = 3;
		extract_group(num, group, &idx, size);
		if (is_zero_group (group, size)) // ignora grupos "000"
		{
			i++;
			continue ;
		}
		print_non_zero_group(dict, group, &params[4], (params[3] - i - 1) * 3);
		i++;
	}
	handle_zero_case(dict, params[4]);// se todos os grupos foram "000", imprime "ZERO"
}
