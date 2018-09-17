/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmulamba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 18:07:53 by bmulamba          #+#    #+#             */
/*   Updated: 2018/05/23 18:08:12 by bmulamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t o;
	size_t p;
	size_t longeur;

	longeur = ft_strlen(dst);
	o = 0;
	while (dst[o])
		o++;
	p = 0;
	if (size < longeur)
		return (ft_strlen(src) + size);
	if (size == longeur)
		return (longeur + ft_strlen(src));
	else
	{
		while (src[p] && p < size - longeur - 1)
		{
			dst[o] = src[p];
			p++;
			o++;
		}
		dst[o] = '\0';
		return (longeur + ft_strlen(src));
	}
}
