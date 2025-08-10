/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmichel- <bmichel-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:49:42 by bmichel-          #+#    #+#             */
/*   Updated: 2025/08/03 19:49:43 by bmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "funct.h"
#include "struct_key.h"
// Conversão de centenas e grupos

/*
    Esta função imprime a parte das centenas de um grupo de 3 dígitos.
    Exemplo:
        Se o grupo for "123":
            - Primeiro imprime "ONE" (1)
            - Depois imprime "HUNDRED"
        Se ainda houver dezenas ou unidades (como "23" no exemplo), imprime espaço depois.
*/
void	print_hundreds(t_dict *dict, char *group)
{
	char	buf[4];
	t_dict	*d;

	buf[0] = group[0]; // Extrai o primeiro dígito (centena)
	buf[1] = '\0';
	d = find_dict(dict, buf, 1); // Procura no dicionário esse número
	if (d)
		ft_putstr(d->value); // Ex: "1" => "ONE"
	ft_putstr(" ");
	d = find_dict(dict, "100", 3);// Sempre procura por "100" => "HUNDRED"
	if (d)
		ft_putstr(d->value);
	if (group[1] != '0' || group[2] != '0')// Se houver dezenas/unidades, imprime espaço
		ft_putstr(" ");
}

/*
    Esta função decide se deve imprimir centenas e chama também a impressão de dezenas e unidades.
    Exemplo:
        "123" => chama print_hundreds (para "1 HUNDRED") e depois print_tens_units (para "23")
        "045" => ignora centenas, só imprime "FORTY-FIVE"
*/
void	print_group(t_dict *dict, char *group)
{
	int	len;

	len = ft_strlen(group);
	if (len == 3 && group[0] != '0')
		print_hundreds(dict, group);
	print_tens_units(dict, group, len);
}

/*
    Esta função imprime as potências de mil (mil, milhão, bilhão...).
    Exemplo:
        Se houver 6 zeros (1 000 000), ela imprime "MILLION"
        Isso é calculado com o `zero_count`.
*/
void	print_power(t_dict *dict, int zero_count)
{
	char	power[64];
	t_dict	*d;
	int		i;

	power[0] = '1'; // Começa com "1"
	i = 0;
	while (i < zero_count)
	{
		power[i + 1] = '0'; // Adiciona zeros, ex: "1000000"
		i++;
	}
	power[i + 1] = '\0';
	d = find_dict(dict, power, ft_strlen(power));
	if (d)
	{
		ft_putstr(" ");
		ft_putstr(d->value); // Ex: "1000000" => "MILLION"
	}
}
