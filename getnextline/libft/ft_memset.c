/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmulamba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:44:27 by bmulamba          #+#    #+#             */
/*   Updated: 2018/05/28 09:26:52 by bmulamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t s;

	s = 0;
	while (s < len)
	{
		*(unsigned char*)(b + s) = (unsigned char)c;
		s++;
	}
	return (b);
}
