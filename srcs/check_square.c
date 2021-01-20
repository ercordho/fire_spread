/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 13:25:08 by ercordho          #+#    #+#             */
/*   Updated: 2021/01/20 14:34:05 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fire_spread.h"

static int			get_percent(void)
{
	return ((rand() % (5 + 1)) ? 1 : -1);
}

static int			can_spread(int i, int j, t_fire_spread data)
{
	if (data.lim == data.size * data.size)
		return (-1);
	if (data.x + i < 0 || data.x + i > (int)data.size - 1)
		return (-1);
	if (data.y + j < 0 || data.y + j > (int)data.size - 1)
		return (-1);
	if (data.x + i == data.x && data.y + j == data.y)
		return (-1);
	if (data.map[data.x + i][data.y + j] == 'F')
		return (-1);
	return (1);
}

void				check_square(t_fire_spread *data)
{
	int				i;
	int				j;

	i = -1;
	while (i < 2)
	{
		j = -1;
		while (j < 2)
		{
			if (can_spread(i, j, *data) == 1)
			{			
				if (get_percent() == 1)
				{
					data->lim++;
					data->map[data->x + i][data->y + j] = 'F';
					display_map(*data);
					data->x += i;
					data->y += j;
					check_square(data);
				}
			}
			j++;
		}
		i++;
	}
}
