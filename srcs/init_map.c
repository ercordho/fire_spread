/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 13:08:12 by ercordho          #+#    #+#             */
/*   Updated: 2021/01/20 14:03:07 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fire_spread.h"

char				**init_map(size_t size)
{
	char			**map;
	int				j;

	if ((map = (char**)malloc(sizeof(char*) * (size + 1))) == NULL)
		return (NULL);
	j = -1;
	while (++j < (int)size)
	{
		if ((map[j] = (char*)malloc(sizeof(char) * (size + 1))) == NULL)
			return (NULL);
		ft_memset((void*)map[j], '.', size);
		map[j][size + 1] = '\0';
	}
	map[size] = NULL;
	return (map);
}
