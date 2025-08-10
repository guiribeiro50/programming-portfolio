/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guida-co <guida-co@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 13:18:48 by guida-co          #+#    #+#             */
/*   Updated: 2025/07/31 15:52:12 by guida-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	divisor;

	i = nb;
	if (nb <= 2)
		return (2);
	while (i >= nb)
	{
		divisor = 2;
		while (divisor < i)
		{
			if (i % divisor == 0)
				break ;
			divisor++;
			if (divisor == i)
				return (i);
		}
		i++;
	}
	return (i);
}
/*
int	main()
{
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(-1));
	printf("%d\n", ft_find_next_prime(100));
	printf("%d\n", ft_find_next_prime(10));
}*/
