/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrindad <gtrindad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:22:02 by gtrindad          #+#    #+#             */
/*   Updated: 2021/08/26 23:32:41 by gtrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	memchr

SYNOPSIS
	#include <string.h>

	void *memchr(const void *s, int c, size_t n);

DESCRIPTION
	The memchr() function scans the initial n bytes of the memory
	area pointed to by s for the first instance of c.
	Both c and the bytes of the memory area pointed to by s are
	interpreted as unsigned char.

RETURN VALUE
	The memchr() and memrchr() functions return a pointer to the
	matching byte or NULL if the character does not occur in the
	given memory area.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*schr;

	schr = (unsigned char *)s;
	while (n > 0)
	{
		if (*(schr) == (unsigned char)c)
			return ((unsigned char *)schr);
		schr++;
		n--;
	}
	return (0);
}
