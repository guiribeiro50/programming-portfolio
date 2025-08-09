/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guida-co <guida-co@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 12:24:29 by guida-co          #+#    #+#             */
/*   Updated: 2025/07/29 13:24:26 by guida-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	len_dest(char *dest)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	return (i);
}

unsigned int	len_src(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	dest_len = len_dest(dest);
	src_len = len_src(src);
	i = dest_len;
	j = 0;
	if (size == 0)
		return (src_len);
	if (size <= dest_len)
		return (size + src_len);
	while (i < size - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[50] = "Hello";
	char	str2[50] = "";
	printf("%d\n", ft_strlcat(str1, " World", 20));
	printf("%d\n", ft_strlcat(str2, " Hello", 10));
}*/
