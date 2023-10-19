/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 08:54:39 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/15 11:22:22 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	print(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i <= argc - 1)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*swap;

	if (argc == 1)
		return (0);
	i = 1;
	while (i < argc)
	{
		if (argv[i] != '\0')
		{
			if (i < argc - 1)
			{
				if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				{
					swap = argv[i];
					argv[i] = argv[i + 1];
					argv[i + 1] = swap;
					i = 0;
				}
			}
		}
		i++;
	}
	print(argc, argv);
}
