/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 13:20:59 by ercordho          #+#    #+#             */
/*   Updated: 2021/01/20 14:02:05 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/fire_spread.h"

int					main(void)
{
	t_fire_spread	data;

	srand(time(0));
	init_fire_spread_struct(&data);
	check_square(&data);
	return (0);
}
