/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 13:15:20 by ercordho          #+#    #+#             */
/*   Updated: 2021/01/20 13:21:56 by ercordho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fire_spread.h"

void				*ft_memset(void *addr, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	uc;
	size_t			i;

	str = (unsigned char*)addr;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
		str[i++] = uc;
	return (addr);
}
