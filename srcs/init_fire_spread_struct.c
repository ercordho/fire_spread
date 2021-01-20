/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_fire_spread_struct.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 13:04:38 by ercordho          #+#    #+#             */
/*   Updated: 2021/01/20 14:49:39 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fire_spread.h"

void				init_fire_spread_struct(t_fire_spread *data)
{
	data->x = 8;
	data->y = 8;
	data->size = 18;
	data->lim = 0;
	data->map = init_map(data->size);
}
