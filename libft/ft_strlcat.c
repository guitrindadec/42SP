/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrindad <gtrindad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:18:25 by gtrindad          #+#    #+#             */
/*   Updated: 2021/09/19 15:50:36 by gtrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	strlcat

SYNOPSIS
	#include <string.h>

	size_t strlcat(char *dst, const char *src, size_t size);

DESCRIPTION
	The strlcat() function appends the NUL-terminated string src to
	the end of dst. It will append at most size - strlen(dst) - 1 bytes,
	NUL-terminating the result.

RETURN VALUE
	The strlcpy() and strlcat() functions return the total length of
	the string they tried to create.
	For strlcat() that means the initial length of dst plus the length of src.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
