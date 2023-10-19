/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_one_argv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrujil <jutrujil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 20:17:39 by jutrujil          #+#    #+#             */
/*   Updated: 2021/12/12 18:22:25 by jutrujil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	print_str(char *str);
int		ft_get_number(char *argv[]);
int		ft_is_number(char *str);
void	procesar(char *cadena, int nb);

int	ft_one_argv(char *argv[])
{
	int		fichero;
	char	cadena[5000];
	int		c;

	fichero = open("numbers.dict", O_RDONLY);
	if (fichero == -1)
	{
		print_str("Dict Error\n");
		return (0);
	}
	c = read(fichero, cadena, 5000);
	procesar(cadena, ft_get_number(argv));
	close(c);
	return (0);
}
