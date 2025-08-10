/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guida-co <guida-co@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 13:32:17 by guida-co          #+#    #+#             */
/*   Updated: 2025/08/04 12:25:53 by guida-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*prog_name;
	int		i;

	i = 0;
	if (argc > 0)
	{
		prog_name = argv[0];
		while (prog_name[i] != '\0')
		{
			write (1, &prog_name[i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
