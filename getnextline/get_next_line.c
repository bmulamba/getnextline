/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmulamba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 17:36:16 by bmulamba          #+#    #+#             */
/*   Updated: 2018/06/23 18:23:32 by bmulamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		verif(int fd, char **line, char **stock)
{
	int		i;
	char	*tmp;

	i = 0;
	while (stock[fd][i] != '\n' && stock[fd][i] != '\0')
		i++;
	if (stock[fd][i] == '\0')
	{
		*line = ft_strdup(stock[fd]);
		ft_strdel(&stock[fd]);
	}
	else if (stock[fd][i] == '\n')
	{
		*line = ft_strsub(stock[fd], 0, i);
		tmp = ft_strdup(&stock[fd][i + 1]);
		free(stock[fd]);
		stock[fd] = tmp;
		if (stock[fd][0] == '\0')
			ft_strdel(&stock[fd]);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char		*stock[1];
	char			buff[BUFF_SIZE + 1];
	int				ret;
	char			*tmp;

	if (fd < 0 || !line)
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (stock[fd] == NULL)
			stock[fd] = ft_strnew(1);
		tmp = ft_strjoin(stock[fd], buff);
		free(stock[fd]);
		stock[fd] = tmp;
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (stock[fd] == NULL || stock[fd][0] == '\0'))
		return (0);
	return (verif(fd, line, stock));
}
