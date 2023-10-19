/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   procesar_tres.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:09:39 by jutrujil          #+#    #+#             */
/*   Updated: 2021/12/11 21:13:11 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_char(char c);
void	procesar_dos(char *cadena, int nb);
void	procesar_uno(char *cadena, int nb);
void	procesar_decimas(char *cadena, int nb);
int		procesar_tres_2(char *cadena, int nb, int *dj);

int	procesar_tres(char *cadena, int nb)
{
	int	j;

	j = 0;
	if (nb / 10 != 0)
	{
		while (j < 690)
		{
			if (cadena[j] == 1 + '0' && cadena[j + 2] == '0')
			{
				procesar_tres_2(cadena, nb, &j);
				return (1);
			}
			j++;
		}
	}
	return (1);
}

int	procesar_tres_2(char *cadena, int nb, int *dj)
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
