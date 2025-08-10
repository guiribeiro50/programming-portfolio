/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guida-co <guida-co@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:21:47 by guida-co          #+#    #+#             */
/*   Updated: 2025/08/06 12:12:36 by guida-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	len_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		size;

	size = len_str(src);
	dup = malloc(size + 1);
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, src);
	return (dup);
}

void	free_array(t_stock_str *array, int limit)
{
	int	i;

	i = 0;
	while (i < limit)
	{
		if (array[i].copy != NULL)
			free(array[i].copy);
	}
	free(array);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*array;

	i = 0;
	array = malloc(sizeof(t_stock_str) * (ac + 1));
	if (array == NULL)
		return (NULL);
	while (i < ac)
	{
		array[i].size = len_str(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		if (array[i].copy == NULL)
		{
			free_array(array, i);
			return (NULL);
		}
		i++;
	}
	array[i].str = NULL;
	return (array);
}
/*
#include <stdio.h>

int main(void)
{
    char *arr[] = {"Hello", "world", "42", "C programming"};
    int ac = 4;
    t_stock_str *tab = ft_strs_to_tab(ac, arr);
    int i = 0;

    if (!tab)
    {
        printf("Erro na alocação.\n");
        return 1;
    }

    while (tab[i].str != NULL)
    {
        printf("Index %d:\n", i);
        printf("  size: %d\n", tab[i].size);
        printf("  str: %s\n", tab[i].str);
        printf("  copy: %s\n", tab[i].copy);
        i++;
    }

    return 0;
}*/
