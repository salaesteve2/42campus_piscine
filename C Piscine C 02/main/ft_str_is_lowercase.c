/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:16:06 by sasalama          #+#    #+#             */
/*   Updated: 2021/11/30 12:17:43 by sasalama         ###   ########.fr       */
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
		if ((str[i] < 'a') || (str[i] > 'z'))
		{
			numero = 0;
		}
		i++;
	}
	return (numero);
}

int main()
{
    char *cadena = "";
    int numero;

    numero = ft_str_is_alpha(cadena);
    printf("%d",numero);
}
