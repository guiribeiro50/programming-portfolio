/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guida-co <guida-co@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 12:14:27 by guida-co          #+#    #+#             */
/*   Updated: 2025/07/31 15:50:22 by guida-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	divisor;

	divisor = 2;
	if (nb <= 1)
		return (0);
	while (divisor < nb)
	{
		if (nb % divisor == 0)
			return (0);
		divisor++;
	}
	return (1);
}
/*
int	main()
{
	printf("%d\n", ft_is_prime(-1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(100));
}*/
