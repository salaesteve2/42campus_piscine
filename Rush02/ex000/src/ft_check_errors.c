/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrujil <jutrujil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 17:53:59 by jutrujil          #+#    #+#             */
/*   Updated: 2021/12/12 18:31:03 by jutrujil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_number(char *str);

int	ft_check_errors(int argc, char *argv[])
{
	char	**arg;

	arg = argv;
	if (argc < 2 || argc > 3)
		return (0);
	if (!ft_is_number(argv[1]))
		return (0);
	return (1);
}
