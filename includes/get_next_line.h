/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshkykav <vshkykav@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 17:43:00 by vshkykav          #+#    #+#             */
/*   Updated: 2017/12/06 15:32:12 by vshkykav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1024

typedef struct		s_file
{
	int				fd;
	size_t			count;
	char			buff[BUFF_SIZE + 1];
	struct s_file	*next;
}					t_file;

int					get_next_line(const int fd, char **line);

#endif
