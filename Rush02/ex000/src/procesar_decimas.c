/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   procesar_decimas.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:05:33 by jutrujil          #+#    #+#             */
/*   Updated: 2021/12/11 21:19:06 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_char(char c);

int	procesar_decimas(char *cadena, int nb)
{
	int	i;

	if (nb > 10 && nb < 20)
	{
		i = 0;
		while (cadena[i] != '\0')
		{
			if (cadena[i] == (nb / 10) + '0'
				&& cadena[i + 1] == (nb % 10) + '0')
			{
				while (i < 690)
				{
					if (cadena[i] >= 'a' && cadena[i] <= 'z')
						print_char(cadena[i]);
					if (cadena[i] == '\n')
						return (1);
					i++;
				}
			}
			i++;
		}
		return (1);
	}
	return (0);
}
