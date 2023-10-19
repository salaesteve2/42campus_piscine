/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   obs_calc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:01:57 by sasalama          #+#    #+#             */
/*   Updated: 2021/12/16 11:40:56 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	obs_calc(char *txt, char obst)
{
	int	obs;
	int	o;

	o = 0;
	obs = 1;
	while (*(txt + o) != 0)
	{
		if (*(txt + o) == obst)
		{
			obs = obs + 2;
		}
		o++;
	}
	return (obs);
}
