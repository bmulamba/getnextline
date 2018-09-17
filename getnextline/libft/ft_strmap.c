/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmulamba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 18:11:09 by bmulamba          #+#    #+#             */
/*   Updated: 2018/05/28 10:41:38 by bmulamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*newer;
	int		v;

	if (!s)
		return (NULL);
	if (!(newer = (char*)malloc(ft_strlen(s) + 1)))
		return (NULL);
	v = 0;
	while (*s != '\0')
	{
		newer[v++] = (*f)(*s);
		s++;
	}
	newer[v] = '\0';
	return (newer);
}
