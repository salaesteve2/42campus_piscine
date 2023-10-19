/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:46:32 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/13 09:21:49 by sasalama         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while(nb > 0)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
	return (0);
}

int main()
{
	int number;

	number = 2147483647;

	printf("%d",ft_find_next_prime(number));
}