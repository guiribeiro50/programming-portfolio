/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guida-co <guida-co@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:51:09 by guida-co          #+#    #+#             */
/*   Updated: 2025/07/30 17:39:01 by guida-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	calculate_divisor(long temp)
{
	int	divisor;

	divisor = 1;
	while (temp / divisor >= 10)
		divisor *= 10;
	return (divisor);
}

void	ft_putnbr(int nb)
{
	long	nb_long;
	long	temp;
	char	digit;
	int		divisor;

	nb_long = nb;
	if (nb_long < 0)
	{
		write(1, "-", 1);
		nb_long = -nb_long;
	}
	temp = nb_long;
	divisor = calculate_divisor(temp);
	while (divisor > 0)
	{
		digit = (temp / divisor) + '0';
		write(1, &digit, 1);
		temp %= divisor;
		divisor /= 10;
	}
}
/*
int	main(void)
{
	ft_putnbr(-12345);
}*/
