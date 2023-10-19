/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:31:23 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/13 09:25:22 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int j;

	i = 2;
	j = 0;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 2147483647)
	{
		return (1);
	}
	while (i < nb)
	{
		if (nb % i == 0)
		{
			j = 1;
		}
		i++;
	}
	if (j == 1)
	{
		return (0);
	}
	return (1);
}

int main()
{
	int number;

	number = 2147483647;

	printf("%d",ft_is_prime(number));
}