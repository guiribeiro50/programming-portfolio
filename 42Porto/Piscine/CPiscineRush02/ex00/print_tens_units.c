/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tens_units.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmichel- <bmichel-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:28:09 by bmichel-          #+#    #+#             */
/*   Updated: 2025/08/03 19:28:20 by bmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "funct.h"
#include "struct_key.h"

// Conversão de dezenas e unidades


/*
    Para números como 20, 30, 40...
    Ex:
        grupo = "23" => imprime "TWENTY-THREE"
*/
void	print_tens_units_aux2(t_dict *dict, char *buf, char *group, int len)
{
	t_dict	*d;

	buf[0] = group[len - 2];// ex: '2'
	buf[1] = '0';// transforma em "20"
	buf[2] = '\0';
	d = find_dict(dict, buf, 2);
	if (d)
		ft_putstr(d->value);// Ex: "20" => "TWENTY"
	if (group[len - 1] != '0')// se tiver unidade, ex: "23"
		ft_putstr("-");
}

/*
    Para unidades (último dígito)
    Ex:
        grupo = "123" => extrai "3" => "THREE"
*/
void	print_tens_units_aux3(t_dict *dict, char *buf, char *group, int len)
{
	t_dict	*d;

	buf[0] = group[len - 1];
	buf[1] = '\0';
	d = find_dict(dict, buf, 1);
	if (d)
		ft_putstr(d->value);
}


/*
    Para números entre 10 e 19, que têm nomes únicos.
    Ex:
        "11" => "ELEVEN", "13" => "THIRTEEN"
*/
void	print_tens_units_aux1(t_dict *dict, char *buf, char *group, int len)
{
	t_dict	*d;

	buf[0] = group[len - 2];
	buf[1] = group[len - 1];
	buf[2] = '\0';
	d = find_dict (dict, buf, 2);
	if (d)
	{
		ft_putstr (d->value);
	}
}

/*
    Função principal para imprimir dezenas e unidades:
    Casos:
        - 11 a 19: chama aux1
        - 20 a 99: chama aux2 e aux3
        - 01 a 09: só aux3
*/
void	print_tens_units(t_dict *dict, char *group, int len)
{
	char	buf[4];

	if (len >= 2 && group[len - 2] == '1')
	{
		print_tens_units_aux1 (dict, buf, group, len);
		return ;
	}
	if (len >= 2 && group[len - 2] != '0')
	{
		print_tens_units_aux2(dict, buf, group, len);
	}
	if (group[len - 1] != '0')
	{
		print_tens_units_aux3(dict, buf, group, len);
	}
}
