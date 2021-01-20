/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fire_spread.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 13:00:06 by ercordho          #+#    #+#             */
/*   Updated: 2021/01/20 13:48:02 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIRE_SPREAD_H
# define FIRE_SPREAD_H

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

typedef struct		s_fire_spread
{
	int				x;
	int				y;
	size_t			size;
	size_t			lim;
	char			**map;
}					t_fire_spread;

void				check_square(t_fire_spread *data);
void				display_map(t_fire_spread data);
void				*ft_memset(void *addr, int c, size_t n);
void				init_fire_spread_struct(t_fire_spread *data);
char				**init_map(size_t size);
#endif
