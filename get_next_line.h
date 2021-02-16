/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:30:36 by ade-garr          #+#    #+#             */
/*   Updated: 2021/02/16 10:29:45 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_position(char *left);
int		ft_free(char **line);
int		ft_checkleft(char *left);
size_t	ft_strlen_gnl(const char *s);
char	*ft_join(char *line, char *left);
void	ft_moveleft(char *left, char *newleft);
int		ft_fill_line(int fd, char **line, char (*left)[BUFFER_SIZE + 1]);
int		ft_give_line(char **line, char *left);
int		get_next_line(int fd, char **line);

#endif
