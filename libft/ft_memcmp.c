/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrindad <gtrindad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:22:23 by gtrindad          #+#    #+#             */
/*   Updated: 2021/08/28 00:14:50 by gtrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	memcmp

SYNOPSIS
	#include <string.h>

	int memcmp(const void *s1, const void *s2, size_t n);

DESCRIPTION
	The memcmp() function compares the first n bytes (each interpreted
	as unsigned char) of the memory areas s1 and s2.

RETURN VALUE
	The memcmp() function returns an integer less than, equal to, or greater
	than zero if the first n bytes of s1 is found, respectively, to be less
	than, to match, or be greater than the first n bytes of s2.

	For a nonzero return value, the sign is determined by the sign of the
	difference between the first pair of bytes (interpreted as unsigned char)
	that differ in s1 and s2.

	If n is zero, the return value is zero.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*a;
	const unsigned char	*b;
	size_t				i;

	a = s1;
	b = s2;
	i = 0;
	while (i < n)
	{
		if (a[i] != b[i])
			return ((int)(a[i] - b[i]));
		i++;
	}
	return (0);
}
