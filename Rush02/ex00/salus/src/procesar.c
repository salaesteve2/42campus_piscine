/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   procesar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:04:44 by jutrujil          #+#    #+#             */
/*   Updated: 2021/12/12 01:13:50 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	digitos_2(char *cadena, int nb);
void	digitos_3(char *cadena, int nb);
void	digitos_4(char *cadena, int nb);
void	digitos_5(char *cadena, int nb);
int		number(int nb);
int		procesar_decimas(char *cadena, int nb);
void	procesar_dos(char *cadena, int nb);
void	procesar_uno(char *cadena, int nb);
void	procesar_tres(char *cadena, int nb);
void	procesar_cuatro(char *cadena, int nb);
void	print_char(char c);
void	digitos_2(char *cadena, int nb);
void	digitos_3(char *cadena, int nb);
void	digitos_4(char *cadena, int nb);
void	digitos_5(char *cadena, int nb);
void	digitos_6(char *cadena, int nb);
void	digitos_7(char *cadena, int nb);
void	digitos_8(char *cadena, int nb);
void	digitos_9(char *cadena, int nb);
void	conditions_1(int digitos, char *cadena, int nb, int i);
void	conditions_2(int digitos, char *cadena, int nb, int i);

void	procesar(char *cadena, int nb)
{
	int	digitos;
	int	i;

	i = 0;
	digitos = number(nb);
	i = procesar_decimas(cadena, nb);
	conditions_1(digitos, cadena, nb, i);
	conditions_2(digitos, cadena, nb, i);
}

void	conditions_1(int digitos, char *cadena, int nb, int i)
{
	if ((digitos == 2 || digitos == 1) && i == 0)
		digitos_2(cadena, nb);
	if (digitos == 3 && i == 0)
		digitos_3(cadena, nb);
	if (digitos == 4 && i == 0)
		digitos_4(cadena, nb);
	if (digitos == 5 && i == 0)
		digitos_5(cadena, nb);
	if (digitos == 6 && i == 0)
		digitos_6(cadena, nb);
	if (digitos == 7 && i == 0)
		digitos_7(cadena, nb);
}

void	conditions_2(int digitos, char *cadena, int nb, int i)
{
	if (digitos == 8 && i == 0)
		digitos_8(cadena, nb);
	if (digitos == 9 && i == 0)
		digitos_9(cadena, nb);
	if (digitos == 10 && i == 0)
		print_char('1');
}

void	digitos_2(char *cadena, int nb)
{
	procesar_dos(cadena, nb);
	if (nb > 10 && nb % 10 != 0)
	{
		print_char(' ');
	}
	procesar_uno(cadena, nb % 10);
}

void	digitos_3(char *cadena, int nb)
{
	procesar_uno(cadena, nb / 100);
	print_char(' ');
	procesar_tres(cadena, nb);
	if (nb % 100 < 11 || nb % 100 > 19)
	{
		digitos_2(cadena, nb % 100);
		procesar_uno(cadena, nb % 1000);
	}
	else
		procesar_decimas(cadena, nb % 100);
}
