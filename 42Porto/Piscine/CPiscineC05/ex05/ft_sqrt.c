/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guida-co <guida-co@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 12:12:55 by guida-co          #+#    #+#             */
/*   Updated: 2025/07/31 15:46:52 by guida-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	base;
	int	quadrado;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	base = 1;
	while (base < nb)
	{
		quadrado = base * base;
		if (quadrado == nb)
			return (base);
		else
			base++;
	}
	return (0);
}
/*
int	main()
{
	printf("%d", ft_sqrt(4));
	printf("\n");
	printf("%d", ft_sqrt(3));
}*/
