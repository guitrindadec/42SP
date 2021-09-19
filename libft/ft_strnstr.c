/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrindad <gtrindad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:22:47 by gtrindad          #+#    #+#             */
/*   Updated: 2021/08/27 22:36:04 by gtrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	strnstr

SYNOPSIS
	#include <string.h>

	char *strnstr(const char *big, const char *little, size_t len);

DESCRIPTION
	The strnstr() function locates the first occurrence of the
	null-terminated string little in the string big, where not more than
	len characters are searched.
	Characters that appear after a '\0'	character are not searched.
	Since the strnstr() function is a FreeBSD specific API, it should only
	be used when portability is not a concern.

RETURN VALUE
	If little is an empty string, big is returned; if little occurs nowhere
	in big, NULL is returned; otherwise a pointer to the first character of
	the first occurrence of little is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == 0)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] == big[i + j] && (i + j) < len)
		{
			if (little[++j] == 0)
				return ((char *) big + i);
		}
		i++;
	}
	return (0);
}
