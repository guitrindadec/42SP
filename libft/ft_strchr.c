/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrindad <gtrindad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:20:38 by gtrindad          #+#    #+#             */
/*   Updated: 2021/09/19 15:50:03 by gtrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	strchr

SYNOPSIS
	#include <string.h>

	char *strchr(const char *s, int c);

DESCRIPTION
	The strchr() function returns a pointer to the first occurrence
	of the character c in the string s.

RETURN VALUE
	The strchr() and strrchr() functions return a pointer to the matched
	character or NULL if the character is not found.
	The terminating null byte is  considered part of the string,
	so that if c is specified as '\0', these functions return a pointer
	to the terminator.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char) c)
			return ((char *)s);
		s++;
	}
	if (*s == (unsigned char) c)
		return ((char *)s);
	return (0);
}
