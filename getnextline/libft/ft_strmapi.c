/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmulamba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 18:11:47 by bmulamba          #+#    #+#             */
/*   Updated: 2018/05/23 18:12:08 by bmulamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newer;
	unsigned int	v;

	if (!s)
		return (NULL);
	v = 0;
	if (!(newer = (char*)malloc(ft_strlen(s) + 1)))
		return (NULL);
	while (s[v])
	{
		newer[v] = (*f)(v, s[v]);
		v++;
	}
	newer[v] = '\0';
	return (newer);
}
