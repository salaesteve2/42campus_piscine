/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:24:25 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/13 09:18:51 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;

	i = 1;

	while (i < nb)
	{
		if (i * i < 0)
		{
			return (0);
		}
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

int main()
{
	int number;

	number = 2147483647;

	printf("%d",ft_sqrt(number));
}