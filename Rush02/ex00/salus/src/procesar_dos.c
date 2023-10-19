/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   procesar_dos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:06:00 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/11 23:09:33 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_char(char c);
int		procesar_dos_2(char *cadena, int *dj);

int	procesar_dos(char *cadena, int nb)
{
	int	j;

	j = 0;
	if (nb / 10 != 0)
	{
		while (j < 690)
		{
			if (cadena[j] == (nb / 10) + '0' && cadena[j + 1] == '0')
			{
				procesar_dos_2(cadena, &j);
				return (1);
			}
			j++;
		}
	}
	return (1);
}

int	procesar_dos_2(char *cadena, int *dj)
{
	int	s;

	s = *dj;
	while (s < 690)
	{
		if (cadena[s] >= 'a' && cadena[s] <= 'z')
			print_char(cadena[s]);
		if (cadena[s] == '\n')
			return (1);
		s++;
	}
	return (1);
}
