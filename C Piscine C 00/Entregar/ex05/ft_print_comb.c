/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:02:11 by sasalama          #+#    #+#             */
/*   Updated: 2021/11/28 11:02:12 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escribir(int numero1, int numero2, int numero3)
{
	if (numero1 != numero2 && numero1 != numero3)
	{
		if (numero2 != numero1 && numero2 != numero3)
		{
			if (numero3 > numero2 && numero2 > numero1)
			{
				write(1, &numero1, 1);
				write(1, &numero2, 1);
				write(1, &numero3, 1);
				if (numero1 != '7')
				{
					write(1, ",", 1);
					write(1, " ", 1);
				}
			}
		}
	}
}

void	comprobar(int numero1, int numero2, int numero3)
{
	while (numero1 <= '9')
	{
		escribir(numero1, numero2, numero3);
		numero3++;
		if (numero3 == '9')
		{
			escribir(numero1, numero2, numero3);
			numero2++;
			numero3 = '0';
		}
		if (numero2 == '9')
		{
			escribir(numero1, numero2, numero3);
			numero1++;
			numero2 = '0';
			numero3 = '0';
		}
	}
}

void	ft_print_comb(void)
{
	int	numero1;
	int	numero2;
	int	numero3;

	numero1 = '0';
	numero2 = '1';
	numero3 = '2';
	comprobar(numero1, numero2, numero3);
}
