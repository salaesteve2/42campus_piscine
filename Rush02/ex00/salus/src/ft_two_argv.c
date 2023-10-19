/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_two_argv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 20:22:10 by jutrujil          #+#    #+#             */
/*   Updated: 2021/12/12 01:53:44 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

void	print_str(char *str);
int		ft_get_number(char *argv[]);
int		ft_is_number(char *str);
void	procesar(char *cadena, int nb);

int	ft_two_argv(char *argv[])
{
	char	cadena[5000];
	int		fichero;
	int		c;

	c = 0;
	while (argv[2][c] != '\0')
	{
		cadena[c] = argv[2][c];
		c++;
	}
	cadena[c] = '\0';
	if (ft_is_number(argv[1]) == 1)
	{
		fichero = open(cadena, O_RDONLY);
		if (fichero == -1)
		{
			print_str("Dict Error\n");
			return (0);
		}
		c = read(fichero, cadena, 5000);
		procesar(cadena, ft_get_number(argv));
		close(c);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
