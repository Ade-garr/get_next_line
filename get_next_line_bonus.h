/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 16:18:31 by ade-garr          #+#    #+#             */
/*   Updated: 2020/01/06 16:30:52 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_position(char *left);
int		ft_free(char **line);
int		ft_checkleft(char *left);
size_t	ft_strlen(const char *s);
char	*ft_join(char *line, char *left);
void	ft_moveleft(char *left, char *newleft);
int		ft_fill_line(int fd, char **line, char (*left)[BUFFER_SIZE + 1]);
int		ft_give_line(char **line, char *left);
int		get_next_line(int fd, char **line);

#endif
