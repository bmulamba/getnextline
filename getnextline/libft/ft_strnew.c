/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmulamba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 18:14:43 by bmulamba          #+#    #+#             */
/*   Updated: 2018/05/23 18:14:53 by bmulamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*nouveau;

	if (!(nouveau = (char*)malloc(sizeof(*nouveau) * (size + 1))))
		return (NULL);
	nouveau = (char*)ft_memset(nouveau, 0, size + 1);
	return (nouveau);
}
