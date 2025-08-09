/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guida-co <guida-co@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 11:36:12 by guida-co          #+#    #+#             */
/*   Updated: 2025/07/29 13:58:34 by guida-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[k] != '\0')
	{
		i = k;
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str[i] != to_find[j])
				break ;
			i++;
			j++;
			if (to_find[j] == '\0')
				return (str + k);
		}
		k++;
	}
	return ((void *)0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strstr("Hello world", "world"));
}*/
