/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:31:45 by lperez-h          #+#    #+#             */
/*   Updated: 2023/08/25 12:53:05 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_strchr(char *s, int c)
{
	char	*result;

	result = NULL;
	while(*s)
	{
		if (*s == (char)c)
		{
			result = ((char *)s);
			return (result);
		}
		s++;
	}
	if ((*s == '\0') && ((char)c == '\0'))
		return ((char *)s);
	return (0);
}

char	*ft_strdup(char *s)
{
	char	*result;
	size_t	i;

	result = (char *)malloc(ft_strlen(s) + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		*result = *s;
		result++;
		s++;
	}
	*result = '\0';
	return(result);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	size;
	size_t	i;

	size = 0;
	while (*(s + size))
		size++;
	if (start > size)
		start = size;
	if (len > size - start)
		len = size - start;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while ((*(s + start)) && (i < len))
	{
		*(dest + i) = *(s + start);
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	len;
	size_t	j;
	size_t	i;
	char	*result;

	len = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*(s1 + i))
	{
		*(result + i) = (*(s1 + i));
		i++;
	}
	j = 0;
	while (*(s2 + j))
	{
		*(result + i) = (*(s2 + j));
		j++;
		i++;
	}
	*(result + i) = '\0';
	return (result);
}
