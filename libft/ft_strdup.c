/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrindad <gtrindad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:24:02 by gtrindad          #+#    #+#             */
/*   Updated: 2021/08/27 22:50:41 by gtrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	strdup

SYNOPSIS
	#include <string.h>

	char *strdup(const char *s);

DESCRIPTION
	The strdup() function returns a pointer to a new string which is a
	duplicate of the string s.
	Memory for the new string is obtained with malloc(3), and can be freed
	with free(3).

RETURN VALUE
	On success, the strdup() function returns a pointer to the duplicated
	string.
	It returns NULL if insufficient memory was available, with errno set to
	indicate the cause of the error.
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	size;

	size = ft_strlen(s) + 1;
	dup = (char *)malloc(size);
	if (dup == 0)
		return (0);
	ft_memcpy(dup, s, size);
	return (dup);
}
