/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guida-co <guida-co@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 12:18:24 by guida-co          #+#    #+#             */
/*   Updated: 2025/08/05 12:18:01 by guida-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_totallen(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;
	int	sep_len;

	total_len = 0;
	i = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	return (total_len);
}

char	*ft_empty(void)
{
	char	*empty;

	empty = (char *)malloc(1);
	if (empty != NULL)
		empty[0] = '\0';
	return (empty);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	char	*empty;
	char	*result;

	if (size == 0)
	{
		empty = ft_empty();
		return (empty);
	}
	total_len = ft_totallen(size, strs, sep);
	result = (char *)malloc(total_len + 1);
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
/*
#include <stdio.h>

int main(void)
{
    char *words[] = {"Olá", "mundo", "isto", "é", "um", "teste"};
    int size = 6;
    char *sep = " - ";

    char *result = ft_strjoin(size, words, sep);
    if (result)
    {
        printf("Resultado: %s\n", result);
        free(result);
    }
    else
    {
        printf("Erro ao concatenar strings.\n");
    }

    return 0;
}*/
