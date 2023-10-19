/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_two_argv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrujil <jutrujil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 20:22:10 by jutrujil          #+#    #+#             */
/*   Updated: 2021/12/12 18:21:50 by jutrujil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	print_str(char *str);
int		ft_get_number(char *argv[]);
int		ft_is_number(char *str);
int		ft_two_argv_start(int fichero, char cadena[5000], int c, char *argv[]);
void	procesar(char *cadena, int nb);

void	ft_two_argv(char *argv[])
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
	fichero = open(cadena, O_RDONLY);
	ft_two_argv_start(fichero, cadena, c, argv);
}

int	ft_two_argv_start(int fichero, char cadena[5000], int c, char *argv[])
{
	if (fichero == -1)
	{
		print_str("Dict Error\n");
		return (0);
	}
	c = read(fichero, cadena, 5000);
	procesar(cadena, ft_get_number(argv));
	close(c);
	return (1);
}
