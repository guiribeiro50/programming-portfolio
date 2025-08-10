/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guida-co <guida-co@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:38:27 by guida-co          #+#    #+#             */
/*   Updated: 2025/08/05 12:26:09 by guida-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	j;
	int	result;

	if (min >= max)
		return (NULL);
	result = max - min;
	array = malloc(sizeof(int) * result);
	i = min;
	j = 0;
	while (i < max)
	{
		array[j] = i;
		i++;
		j++;
	}
	return (array);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*result;
	int	i;

	printf("=== TESTES DA FUNÇÃO ft_range ===\n\n");

	// Teste 1: Caso normal (2 a 5)
	printf("Teste 1: ft_range(2, 6) = ");
	result = ft_range(2, 6);
	if (result == NULL)
		printf("NULL\n");
	else
	{
		printf("[");
		for (i = 0; i < 4; i++)
		{
			printf("%d", result[i]);
			if (i < 3) printf(", ");
		}
		printf("]\n");
		free(result);
	}

	// Teste 2: De 0 a 4
	printf("Teste 2: ft_range(0, 5) = ");
	result = ft_range(0, 5);
	if (result == NULL)
		printf("NULL\n");
	else
	{
		printf("[");
		for (i = 0; i < 5; i++)
		{
			printf("%d", result[i]);
			if (i < 4) printf(", ");
		}
		printf("]\n");
		free(result);
	}

	// Teste 3: Negativos a positivos
	printf("Teste 3: ft_range(-3, 3) = ");
	result = ft_range(-3, 3);
	if (result == NULL)
		printf("NULL\n");
	else
	{
		printf("[");
		for (i = 0; i < 6; i++)
		{
			printf("%d", result[i]);
			if (i < 5) printf(", ");
		}
		printf("]\n");
		free(result);
	}

	// Teste 4: Um elemento só
	printf("Teste 4: ft_range(5, 6) = ");
	result = ft_range(5, 6);
	if (result == NULL)
		printf("NULL\n");
	else
	{
		printf("[%d]\n", result[0]);
		free(result);
	}

	// Teste 5: min == max (deve retornar NULL)
	printf("Teste 5: ft_range(5, 5) = ");
	result = ft_range(5, 5);
	if (result == NULL)
		printf("NULL\n");
	else
		printf("ERRO: Deveria retornar NULL!\n");

	// Teste 6: min > max (deve retornar NULL)
	printf("Teste 6: ft_range(10, 3) = ");
	result = ft_range(10, 3);
	if (result == NULL)
		printf("NULL\n");
	else
		printf("ERRO: Deveria retornar NULL!\n");

	printf("\n=== TESTES CONCLUÍDOS ===\n");
	return (0);
}*/
