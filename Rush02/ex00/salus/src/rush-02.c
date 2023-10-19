/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 09:17:50 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/12 01:35:39 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

void	print_str(char *str);
int		ft_one_argv(char *argv[]);
int		ft_two_argv(char *argv[]);

int	main(int argc, char *argv[])
{
	if (argc < 2 || argc > 3)
	{
		print_str("Error\n");
		return (0);
	}
	if (argc == 2)
	{
		ft_one_argv(argv);
	}
	if (argc == 3)
	{
		ft_two_argv(argv);
	}
	return (0);
}
