/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmulamba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:34:02 by bmulamba          #+#    #+#             */
/*   Updated: 2018/05/27 17:56:46 by bmulamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char *dest;
	unsigned char *src;

	dest = (unsigned char*)s1;
	src = (unsigned char*)s2;
	if (n)
		while (n--)
			if ((*dest++ = *src++) == (unsigned char)c)
				return (dest);
	return (NULL);
}
