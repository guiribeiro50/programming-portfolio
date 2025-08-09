/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guida-co <guida-co@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 13:42:17 by guida-co          #+#    #+#             */
/*   Updated: 2025/07/23 13:42:23 by guida-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	key;
	int	j;

	i = 1;
	while (i < size)
	{
		key = tab[i];
		j = i - 1;
		while (j >= 0 && key < tab[j])
		{
			tab[j + 1] = tab[j];
			j--;
		}
		tab[j + 1] = key;
		i++;
	}
}
/*
#include <stdio.h>

int main(void)
{
    int tab[] = {5, 3, 8, 1, 2};
    int size = sizeof(tab) / sizeof(tab[0]);
    int i;

    printf("Array antes da ordenação:\n");
    for (i = 0; i < size; i++)
        printf("%d ", tab[i]);
    printf("\n");

    ft_sort_int_tab(tab, size);

    printf("Array depois da ordenação:\n");
    for (i = 0; i < size; i++)
        printf("%d ", tab[i]);
    printf("\n");

    return 0;
}*/
