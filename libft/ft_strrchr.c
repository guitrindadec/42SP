/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrindad <gtrindad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:21:18 by gtrindad          #+#    #+#             */
/*   Updated: 2021/09/19 15:51:23 by gtrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	strrchr

SYNOPSIS
	#include <string.h>

	char *strrchr(const char *s, int c);

DESCRIPTION
	The strrchr() function returns a pointer to the last occurrence
	of the character c in the string s.

RETURN VALUE
	The strchr() and strrchr() functions return a pointer to the matched
	character or NULL if the character is not found.
	The terminating null byte is  considered part of the string,
	so that if c is specified as '\0', these functions return a pointer
	to the terminator.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char) c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}
