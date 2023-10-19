/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrujil <jutrujil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 09:17:50 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/12 18:23:49 by jutrujil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_str(char *str);
int		ft_check_errors(int argc, char *argv[]);
int		ft_one_argv(char *argv[]);
void	ft_two_argv(char *argv[]);

int	main(int argc, char *argv[])
{
	if (!ft_check_errors(argc, argv))
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
