/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 10:45:37 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/13 09:12:08 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int solve;

	i = 1;
	solve = 1;
	if (power < 0)
	{
		return (0);
	}
	if(nb == 0 && power == 0)
	{
		return (1);
	}
	while (i <= power)
	{
		solve = nb * solve;
		i++;
	}
	return (solve);
}

int main()
{
	int number;
	int power;

	number = -5;
	power = 3;

	printf("%d",ft_iterative_power(number,power));
}