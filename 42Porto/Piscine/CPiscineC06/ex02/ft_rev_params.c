/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guida-co <guida-co@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:14:05 by guida-co          #+#    #+#             */
/*   Updated: 2025/07/30 14:22:46 by guida-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*arg_name;
	int		i;
	int		j;

	i = 0;
	while (i < (argc - 1))
	{
		j = 0;
		arg_name = argv[(argc - 1) - i];
		while (arg_name[j] != '\0')
		{
			write(1, &arg_name[j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
