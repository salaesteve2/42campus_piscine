/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:24:28 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/07 13:39:20 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				comprobar;

	i = 0;
	comprobar = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			comprobar = s1[i] - s2[i];
			return (comprobar);
		}
		i++;
	}
	if (i != n)
	{
		comprobar = s1[i] - s2[i];
		return (comprobar);
	}
	return (comprobar);
}
