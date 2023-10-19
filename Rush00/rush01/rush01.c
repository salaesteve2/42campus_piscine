/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:13:37 by sasalama          #+#    #+#             */
/*   Updated: 2021/11/28 13:05:40 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char z);

void	crear_espacios(int espacios, int x)
{
	while (espacios < x - 2)
	{
		ft_putchar(' ');
		espacios++;
	}
	espacios = 0;
	ft_putchar('*');
}

void	comprobar(int x, int y, int ancho, int alto)
{
	int	espacios;

	espacios = 0;
	if (ancho == 0 && alto == 0)
	{
		ft_putchar('/');
	}
	else if (ancho == x - 1 && alto == y - 1 && x != 1 && y != 1)
	{
		ft_putchar('/');
	}
	else if ((ancho == x - 1 && alto == 0) || (ancho == 0 && alto == y - 1))
	{
		ft_putchar('\\');
	}
	else if (alto == 0 || alto == y - 1 || ancho == 0)
	{
		ft_putchar('*');
	}
	else if (ancho == x - 1)
	{
		crear_espacios(espacios, x);
	}
}

void	rush(int x, int y)
{
	int	ancho;
	int	alto;

	alto = 0;
	while (alto < y)
	{
		ancho = 0;
		while (ancho < x)
		{
			comprobar(x, y, ancho, alto);
			ancho++;
		}
		ft_putchar('\n');
		alto++;
	}
}
