/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmulamba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 18:06:37 by bmulamba          #+#    #+#             */
/*   Updated: 2018/05/23 18:07:24 by bmulamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nouv;
	int		c;

	if (!s1 || !s2)
		return (NULL);
	c = 0;
	if (!(nouv = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	while (*s1)
		nouv[c++] = *s1++;
	while (*s2)
		nouv[c++] = *s2++;
	nouv[c] = '\0';
	return (nouv);
}
