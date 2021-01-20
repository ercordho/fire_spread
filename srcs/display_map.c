/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 13:18:02 by ercordho          #+#    #+#             */
/*   Updated: 2021/01/20 14:35:03 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fire_spread.h"

void				display_map(t_fire_spread data)
{
	int				i;

	i = 0;
	while (data.map[i])
		printf("%s\n", data.map[i++]);
	printf("\n");
}
