/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:28:30 by ade-garr          #+#    #+#             */
/*   Updated: 2020/01/06 16:30:04 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int		ft_position(char *left)
{
	int	i;

	i = 0;
	while (left[i])
	{
		if (left[i] == '\n')
			return (i);
		i++;
	}
	return (0);
}

int		ft_free(char **line)
{
	free(*line);
	*line = NULL;
	return (-1);
}

int		ft_checkleft(char *left)
{
	int i;

	i = 0;
	if (left == NULL)
		return (0);
	while (left[i] != '\0')
	{
		if (left[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (s != NULL)
	{
		while (s[len] != '\0')
			len++;
	}
	return (len);
}
