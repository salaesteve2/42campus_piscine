/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:00:42 by jutrujil          #+#    #+#             */
/*   Updated: 2021/12/12 01:30:13 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_str(char *str);

int	ft_get_number(char *argv[])
{
	int				j;
	unsigned int	nb;

	j = 0;
	nb = 0;
	while (argv[1][j] != '\0')
	{
		nb = argv[1][j] - '0' + nb * 10;
		j++;
	}
	if (j == 0)
	{
		print_str("Error\n");
	}
	if (nb > 4294967295)
		return (-1);
	return (nb);
}
