/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmulamba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:57:03 by bmulamba          #+#    #+#             */
/*   Updated: 2018/05/23 18:19:29 by bmulamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int l;

	l = 0;
	while (s[l])
	{
		if (s[l] == (char)c)
			return ((char*)(s + l));
		l++;
	}
	if (s[l] == (char)c)
		return ((char*)(s + l));
	return (NULL);
}
