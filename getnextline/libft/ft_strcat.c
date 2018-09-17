/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmulamba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:56:26 by bmulamba          #+#    #+#             */
/*   Updated: 2018/05/23 17:56:36 by bmulamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int m;
	int n;

	m = 0;
	n = 0;
	while (s1[m])
		m++;
	while (s2[n])
	{
		s1[m] = s2[n];
		m++;
		n++;
	}
	s1[m] = '\0';
	return (s1);
}