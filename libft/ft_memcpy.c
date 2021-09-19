/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrindad <gtrindad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:45:26 by gtrindad          #+#    #+#             */
/*   Updated: 2021/08/28 00:03:28 by gtrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	memcpy

SYNOPSIS
	#include <string.h>

	void *memcpy(void *dest, const void *src, size_t n);

DESCRIPTION
	The memcpy() function copies n bytes from memory area src to memory area
	dest. The memory areas must not overlap.
	Use memmove(3) if the memory areas do overlap.

RETURN VALUE
	The memcpy() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*_dest;
	unsigned char	*_src;

	_dest = (unsigned char *)dest;
	_src = (unsigned char *)src;
	if (dest == src)
		return (dest);
	while (n-- > 0)
		_dest[n] = _src[n];
	return (dest);
}
