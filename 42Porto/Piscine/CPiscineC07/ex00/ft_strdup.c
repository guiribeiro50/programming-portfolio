/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guida-co <guida-co@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:08:47 by guida-co          #+#    #+#             */
/*   Updated: 2025/08/07 15:16:12 by guida-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		size;

	size = len_str(src);
	dup = malloc(size + 1);
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, src);
	return (dup);
}
/*
#include <stdio.h>

int main(void)
{
    char *str = ft_strdup("Hello, world!");
    if (str == NULL)
        return (1);
    printf("%s\n", str);
    free(str);
    return (0);
}*/
