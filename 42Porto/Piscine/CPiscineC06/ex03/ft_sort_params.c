/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guida-co <guida-co@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:23:19 by guida-co          #+#    #+#             */
/*   Updated: 2025/07/30 15:04:55 by guida-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

void	insertion_sort(char **arg_name, int size)
{
	int		i;
	int		j;
	char	*key;

	i = 1;
	while (i < size)
	{
		key = arg_name[i];
		j = i - 1;
		while (j >= 0 && ft_strcmp(key, arg_name[j]) < 0)
		{
			arg_name[j + 1] = arg_name[j];
			j--;
		}
		arg_name[j + 1] = key;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	char	*arg_name;
	int		i;
	int		j;

	insertion_sort(argv + 1, argc - 1);
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
