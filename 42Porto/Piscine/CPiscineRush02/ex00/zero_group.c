/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero_group.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmichel- <bmichel-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:43:56 by bmichel-          #+#    #+#             */
/*   Updated: 2025/08/03 19:43:59 by bmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funct.h"
#include "struct_key.h"

//Tratamento de grupos zero e impressão de grupos

/*
    Verifica se um grupo (de até 3 dígitos) é todo zero.
    Ex:
        "000" => retorna 1
        "00"  => retorna 1
        "0"   => retorna 1
        "105" => retorna 0
*/
int	is_zero_group(char *group, int size)
{
	if ((size == 3 && group[0] == '0' && group[1] == '0' && group[2] == '0')
		|| (size == 2 && group[0] == '0' && group[1] == '0')
		|| (size == 1 && group[0] == '0'))
		return (1);
	return (0);
}

/*
    Imprime um grupo de número diferente de zero e sua potência.
    Ex:
        Grupo = "123", potência = 6 (milhão), imprime:
        "ONE HUNDRED TWENTY-THREE MILLION"
*/
void	print_non_zero_group(t_dict *dict,
		char *group, int *non_zero, int power)
{
	if (*non_zero)
		ft_putstr(" ");
	print_group(dict, group); // imprime centenas, dezenas, unidades
	*non_zero = 1;
	if (power > 0)
		print_power(dict, power);
}
/*
    Caso especial: se o número inteiro era zero ("0")
    Imprime: "ZERO"
*/
void	handle_zero_case(t_dict *dict, int non_zero)
{
	t_dict	*d;

	if (!non_zero)
	{
		d = find_dict(dict, "0", 1);
		if (d)
			ft_putstr(d->value);
	}
	ft_putstr("\n");
}
