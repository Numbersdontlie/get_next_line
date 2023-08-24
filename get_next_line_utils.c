/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:31:45 by lperez-h          #+#    #+#             */
/*   Updated: 2023/08/24 17:46:20 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	char	*result;

	result = NULL;
	while(*s)
	{
		if (*s == (unsigned char)c)
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

char	*ft_strdup(const char *s)
{
	char	*new;
	char	*result;
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	new = (char *)malloc(i + 1);
	if (new == NULL)
		return (NULL);
	result = new;
	while (*s)
	{
		*new = *s;
		new++;
		s++;
	}
	*new = '\0';
	return(result);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
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

char	*ft_strjoin(char const *s1, char const *s2)
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
		*(result + i) = ((char) *(s1 + i));
		i++;
	}
	j = 0;
	while (*(s2 + j))
	{
		*(result + i) = ((char) *(s2 + j));
		j++;
		i++;
	}
	*(result + i) = '\0';
	return (result);
}

