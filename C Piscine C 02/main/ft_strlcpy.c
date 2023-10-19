/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:13:49 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/02 09:27:07 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (i);
}

int main()
{
	char a[7] = "hola45";
	char b[7] = "sala";
	unsigned int size = 2;
	unsigned int c;

	c = ft_strlcpy(b,a,size);

	printf("%d",c);
	printf(" ");
	printf("%lu",strlcpy(b,a,size));
}