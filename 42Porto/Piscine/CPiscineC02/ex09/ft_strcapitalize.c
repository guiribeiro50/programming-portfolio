/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guida-co <guida-co@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:03:03 by guida-co          #+#    #+#             */
/*   Updated: 2025/07/24 14:05:29 by guida-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (!(str[i - 1] >= 65 && str[i - 1] <= 90)
			&& !(str[i - 1] >= 97 && str[i - 1] <= 122)
			&& !(str[i - 1] >= 48 && str[i - 1] <= 57))
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		}
		else
		{
			if (str[i] >= 65 && str[i] <= 90)
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	text[] = "hi, how are you? 42 words forty-two; fifty+and+one";

	printf("%s\n", ft_strcapitalize(text));
}*/
