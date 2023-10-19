/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   procesar_cuatro.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:23:35 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/11 21:13:11 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_char(char c);
int		procesar_cuatro_2(char *cadena, int nb, int *dj);

int	procesar_cuatro(char *cadena, int nb)
{
	int	j;

	j = 0;
	if (nb / 10 != 0)
	{
		while (j < 690)
		{
			if (cadena[j] == 1 + '0' && cadena[j + 3] == '0')
			{
				procesar_cuatro_2(cadena, nb, &j);
				return (1);
			}
			j++;
		}
	}
	return (1);
}

int	procesar_cuatro_2(char *cadena, int nb, int *dj)
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
