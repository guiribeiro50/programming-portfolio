/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guida-co <guida-co@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 13:41:32 by guida-co          #+#    #+#             */
/*   Updated: 2025/07/23 13:41:38 by guida-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
#include <stdio.h>

int main(void)
{
    int tab[] = {1, 2, 3, 4, 5};
    int size = sizeof(tab) / sizeof(tab[0]);
    int i;

    printf("Array antes da inversão:\n");
    for (i = 0; i < size; i++)
        printf("%d ", tab[i]);
    printf("\n");

    ft_rev_int_tab(tab, size);

    printf("Array depois da inversão:\n");
    for (i = 0; i < size; i++)
        printf("%d ", tab[i]);
    printf("\n");

    return 0;
}*/
