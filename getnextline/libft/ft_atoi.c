/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmulamba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:17:10 by bmulamba          #+#    #+#             */
/*   Updated: 2018/05/31 07:40:20 by bmulamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int nb;
	int sign;
	int i;

	i = 0;
	nb = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	sign = (*str == '-') ? -1 : 1;
	(*str == '-' || *str == '+') ? str++ : str;
	while (*str >= 48 && *str <= 57)
	{
		nb = nb * 10 + *str++ - 48;
		i++;
	}
	if (i > 10 && sign == -1)
		return (0);
	else if (i > 10)
		return (-1);
	else
		return (sign * (int)nb);
}
