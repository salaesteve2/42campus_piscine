/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:18:31 by sasalama          #+#    #+#             */
/*   Updated: 2021/11/30 12:19:51 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	numero;

	numero = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A') || (str[i] > 'Z'))
		{
			numero = 0;
		}
		i++;
	}
	return (numero);
}

int main()
{
	char *cadena = "Dd";
	int numero;

	numero = ft_str_is_alpha(cadena);
	printf("%d",numero);
}