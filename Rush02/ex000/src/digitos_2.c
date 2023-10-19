/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digitos_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrujil <jutrujil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 21:23:28 by jutrujil          #+#    #+#             */
/*   Updated: 2021/12/12 17:43:19 by jutrujil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_char(char c);
void	procesar(char *cadena, int nb);
int		procesar_decimas(char *cadena, int nb);
int		procesar_dos(char *cadena, int nb);
int		procesar_uno(char *cadena, int nb);
int		procesar_tres(char *cadena, int nb);
int		procesar_cuatro(char *cadena, int nb);
int		procesar_cinco(char *cadena, int nb);
int		procesar_seis(char *cadena, int nb);
void	digitos_2(char *cadena, int nb);

void	digitos_8(char *cadena, int nb)
{
	if ((nb / 1000000 < 11) || (nb / 1000000 > 19))
		digitos_2(cadena, nb / 1000000);
	else
		procesar_decimas(cadena, nb / 1000000);
	print_char(' ');
	procesar_cinco(cadena, nb);
	procesar(cadena, nb % 1000000);
}

void	digitos_9(char *cadena, int nb)
{
	digitos_2(cadena, nb / 100000000);
	print_char(' ');
	procesar_seis(cadena, nb);
	procesar(cadena, nb % 100000000);
}
