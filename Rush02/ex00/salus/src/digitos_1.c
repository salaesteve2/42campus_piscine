/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digitos_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 21:10:04 by jutrujil          #+#    #+#             */
/*   Updated: 2021/12/12 00:05:55 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		procesar_decimas(char *cadena, int nb);
int		procesar_dos(char *cadena, int nb);
int		procesar_uno(char *cadena, int nb);
int		procesar_tres(char *cadena, int nb);
int		procesar_cuatro(char *cadena, int nb);
void	procesar(char *cadena, int nb);
void	print_char(char c);
void	digitos_2(char *cadena, int nb);
void	digitos_3(char *cadena, int nb);
int		procesar_cinco(char *cadena, int nb);

void	digitos_4(char *cadena, int nb)
{
	procesar_uno(cadena, nb / 1000);
	print_char(' ');
	procesar_cuatro(cadena, nb);
	procesar(cadena, nb % 1000);
}

void	digitos_5(char *cadena, int nb)
{
	if (nb / 1000 >= 10 && nb / 1000 <= 19)
		procesar_decimas(cadena, nb / 1000);
	else
		digitos_2(cadena, nb / 1000);
	print_char(' ');
	procesar_cuatro(cadena, nb % 10000);
	procesar(cadena, nb % 1000);
}

void	digitos_6(char *cadena, int nb)
{
	int	x;

	x = nb / 1000;
	procesar_uno(cadena, nb / 100000);
	print_char(' ');
	procesar_tres(cadena, nb / 1000);
	procesar(cadena, x % 100);
	print_char(' ');
	procesar_cuatro(cadena, nb / 1000);
	procesar(cadena, nb % 1000);
}

void	digitos_7(char *cadena, int nb)
{
	digitos_2(cadena, nb / 1000000);
	print_char(' ');
	procesar_cinco(cadena, nb);
	procesar(cadena, nb % 1000000);
}

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
