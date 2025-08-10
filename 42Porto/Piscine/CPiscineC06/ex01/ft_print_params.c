/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guida-co <guida-co@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 13:53:26 by guida-co          #+#    #+#             */
/*   Updated: 2025/07/30 14:10:25 by guida-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*arg_name;
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		arg_name = argv[i];
		while (arg_name[j] != '\0')
		{
			write(1, &arg_name[j], 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
