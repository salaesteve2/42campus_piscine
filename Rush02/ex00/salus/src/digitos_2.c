/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digitos_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 21:23:28 by jutrujil          #+#    #+#             */
/*   Updated: 2021/12/12 01:14:02 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		procesar_decimas(char *cadena, int nb);
int		procesar_dos(char *cadena, int nb);
int		procesar_uno(char *cadena, int nb);
int		procesar_tres(char *cadena, int nb);
int		procesar_cuatro(char *cadena, int nb);
void	procesar(char *cadena, int nb);
void	print_char(char c);
int		procesar_seis(char *cadena, int nb);
void	digitos_2(char *cadena, int nb);

void	digitos_9(char *cadena, int nb)
{
	digitos_2(cadena, nb / 100000000);
	print_char(' ');
	procesar_seis(cadena, nb);
	procesar(cadena, nb % 100000000);
}
