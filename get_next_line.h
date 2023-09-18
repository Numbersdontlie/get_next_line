/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 12:09:46 by lperez-h          #+#    #+#             */
/*   Updated: 2023/09/07 13:52:42 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char		*get_next_line(int fd);
char		*ft_strdup(char *s);
size_t		ft_strlen(char *s);
char		*ft_substr(char *s, unsigned int start, size_t len);
char		*ft_strjoin(char *s1, char *s2);

#endif