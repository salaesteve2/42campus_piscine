/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:02:37 by sasalama          #+#    #+#             */
/*   Updated: 2021/11/28 11:02:38 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escribir(char z)
{
	write(1, &z, 1);
}

void	procesar(int numero1, int numero2)
{
	escribir(numero1 / 10 + '0');
	escribir(numero1 % 10 + '0');
	escribir(' ');
	escribir(numero2 / 10 + '0');
	escribir(numero2 % 10 + '0');
	if (numero1 != 98 || numero2 != 99)
	{
		escribir(',');
		escribir(' ');
	}
}

void	ft_print_comb2(void)
{
	int	numero1;
	int	numero2;

	numero1 = 0;
	while (numero1 <= 98)
	{
		numero2 = numero1 + 1;
		while (numero2 <= 99)
		{
			procesar(numero1, numero2);
			numero2++;
		}
		numero1++;
	}
}
