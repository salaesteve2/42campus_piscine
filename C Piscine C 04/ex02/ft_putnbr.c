/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:31:59 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/05 02:54:17 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	comprobar;

	comprobar = 0;
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		nb = nb * -1;
		nb = nb - 1;
		nb = nb / 10;
		comprobar = 1;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	nb = nb + '0';
	write(1, &nb, 1);
	if (comprobar == 1)
		write(1, "8", 1);
}
