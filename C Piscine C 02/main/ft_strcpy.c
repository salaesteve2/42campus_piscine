/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 09:00:57 by sasalama          #+#    #+#             */
/*   Updated: 2021/11/30 09:37:16 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

int main()
{
	char nombre[10] = "salus";
	char apellidos[10] = "salamanca";
	char *resultado;

	resultado = ft_strcpy(nombre,apellidos);
	
	//ft_strcpy(nombre,apellidos);
	//strcpy(nombre,apellidos);
    printf("%s",strcpy(nombre,apellidos));
	printf("%s",resultado);
}
