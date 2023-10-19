/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:45:34 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/09 15:48:39 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	position(char *str, int i)
{
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\f')
			i++;
		if (str[i] == '\r' || str[i] == '\n')
			i++;
		else
			break ;
	}
	return (i);
}

int	number(char *str, int i, int nb)
{
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			break ;
		nb = str[i] - '0' + nb * 10;
		i++;
	}
	return (nb);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	neg;

	i = 0;
	neg = 0;
	nb = 0;
	i = position(str, i);
	while (str[i] != '\0')
	{
		if (str[i] != '+' && str[i] != '-')
			break ;
		if (str[i] == '-')
			neg++;
		i++;
	}
	nb = number(str, i, nb);
	if (neg % 2 != 0)
		nb = nb * -1;
	return (nb);
}

int main()
{
	char *str =  " --+--+1234ab567";

	printf("%d",ft_atoi(str));
}
