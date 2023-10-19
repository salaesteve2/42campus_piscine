/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   procesar_seis.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 23:49:21 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/12 00:03:00 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_char(char c);
int		procesar_seis_2(char *cadena, int nb, int *dj);

int	procesar_seis(char *cadena, int nb)
{
	int	j;

	j = 0;
	if (nb / 10 != 0)
	{
		while (j < 690)
		{
			if (cadena[j] == 1 + '0' && cadena[j + 7] == '0')
			{
				procesar_seis_2(cadena, nb, &j);
				return (1);
			}
			j++;
		}
	}
	return (1);
}

int	procesar_seis_2(char *cadena, int nb, int *dj)
{
	int	s;

	s = *dj;
	while (s < 690)
	{
		if (cadena[s] >= 'a' && cadena[s] <= 'z')
			print_char(cadena[s]);
		if (cadena[s] == '\n')
		{
			if (nb % 100 != 0)
				print_char(' ');
			return (1);
		}
		s++;
	}
	return (1);
}
