/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrindad <gtrindad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 22:53:24 by gtrindad          #+#    #+#             */
/*   Updated: 2021/09/19 15:49:37 by gtrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	memmove

SYNOPSIS
	#include <string.h>

	void *memmove(void *dest, const void *src, size_t n);

DESCRIPTION
	The memmove() function copies n bytes from memory area src to memory area
	dest.
	The memory areas may overlap: copying takes place as though the bytes in
	src are first copied into a temporary array that does not overlap src or
	dest, and the bytes are then copied from the temporary array to dest.

RETURN VALUE
	The memmove() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*_dest;
	unsigned char	*_src;
	size_t			i;

	_dest = (unsigned char *)dest;
	_src = (unsigned char *)src;
	if (_src == _dest || n == 0)
		return (dest);
	if (_src > _dest && _src - _dest < (int)n)
	{
		i = 0;
		while (i < n)
		{
			_dest[i] = _src[i];
			i++;
		}
		return (dest);
	}
	ft_memcpy(dest, src, n);
	return (dest);
}
