/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guida-co <guida-co@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:26:12 by guida-co          #+#    #+#             */
/*   Updated: 2025/08/05 12:36:49 by guida-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	result = max - min;
	*range = malloc(sizeof(int) * result);
	if (*range == NULL)
		return (-1);
	i = min;
	j = 0;
	while (i < max)
	{
		(*range)[j] = i;
		i++;
		j++;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range;
	int	size;
	int	i;
	
	printf("=== TESTES DA FUNÇÃO ft_ultimate_range ===\n\n");
	
	// Teste 1: Caso normal (0 a 4)
	printf("Teste 1: ft_ultimate_range(&range, 0, 5)\n");
	size = ft_ultimate_range(&range, 0, 5);
	printf("Retorno: %d, Array: ", size);
	if (range == NULL)
		printf("NULL\n");
	else
	{
		printf("[");
		for (i = 0; i < size; i++)
		{
			printf("%d", range[i]);
			if (i < size - 1) printf(", ");
		}
		printf("]\n");
		free(range);
	}
	printf("\n");
	
	// Teste 2: min == max
	printf("Teste 2: ft_ultimate_range(&range, 3, 3)\n");
	size = ft_ultimate_range(&range, 3, 3);
	printf("Retorno: %d, Array: ", size);
	if (range == NULL)
		printf("NULL\n");
	else
		printf("ERRO: Deveria ser NULL!\n");
	printf("\n");
	
	// Teste 3: Números maiores
	printf("Teste 3: ft_ultimate_range(&range, 10, 13)\n");
	size = ft_ultimate_range(&range, 10, 13);
	printf("Retorno: %d, Array: ", size);
	if (range == NULL)
		printf("NULL\n");
	else
	{
		printf("[");
		for (i = 0; i < size; i++)
		{
			printf("%d", range[i]);
			if (i < size - 1) printf(", ");
		}
		printf("]\n");
		free(range);
	}
	printf("\n");
	
	// Teste 4: min > max
	printf("Teste 4: ft_ultimate_range(&range, 7, 2)\n");
	size = ft_ultimate_range(&range, 7, 2);
	printf("Retorno: %d, Array: ", size);
	if (range == NULL)
		printf("NULL\n");
	else
		printf("ERRO: Deveria ser NULL!\n");
	printf("\n");
	
	// Teste 5: Negativos a positivos
	printf("Teste 5: ft_ultimate_range(&range, -2, 3)\n");
	size = ft_ultimate_range(&range, -2, 3);
	printf("Retorno: %d, Array: ", size);
	if (range == NULL)
		printf("NULL\n");
	else
	{
		printf("[");
		for (i = 0; i < size; i++)
		{
			printf("%d", range[i]);
			if (i < size - 1) printf(", ");
		}
		printf("]\n");
		free(range);
	}
	printf("\n");
	
	// Teste 6: Só um elemento
	printf("Teste 6: ft_ultimate_range(&range, 5, 6)\n");
	size = ft_ultimate_range(&range, 5, 6);
	printf("Retorno: %d, Array: ", size);
	if (range == NULL)
		printf("NULL\n");
	else
	{
		printf("[%d]\n", range[0]);
		free(range);
	}
	
	printf("\n=== TESTES CONCLUÍDOS ===\n");
	return (0);
}*/
