/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 09:40:37 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/03 15:04:45 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    
    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }
    
    return (dest);
}

int main()
{
    unsigned int n = 1;
    char prueba[] = "salustiano";
    char resultado[] = "adios";

    char prueba2[] = "salustiano";
    char resultado2[] = "adios";

    printf("%s",strncpy(prueba,resultado,n));
    printf("/");
    printf("%s",ft_strncpy(prueba2,resultado2,n));
}
