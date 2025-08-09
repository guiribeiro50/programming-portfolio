/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guida-co <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:21:31 by guida-co          #+#    #+#             */
/*   Updated: 2025/07/22 11:21:40 by guida-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	print_comb_line(int i, int j, int k)
{
	char	string[5];

	string[0] = '0' + i;
	string[1] = '0' + j;
	string[2] = '0' + k;
	if (i == 7 && j == 8 && k == 9)
		write(1, string, 3);
	else
	{
		string[3] = ',';
		string[4] = ' ';
		write(1, string, 5);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				print_comb_line(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
