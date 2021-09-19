/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrindad <gtrindad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:23:37 by gtrindad          #+#    #+#             */
/*   Updated: 2021/09/19 19:23:42 by gtrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	calloc

SYNOPSIS
	#include <stdlib.h>

	void *calloc(size_t nmemb, size_t size);

DESCRIPTION
	The calloc() function allocates memory for an array of nmemb elements of
	size bytes each and returns a pointer to the allocated memory.
	The memory is set to zero. If nmemb or size is 0, then calloc() returns
	either NULL, or a unique pointer value that can later be successfully
	passed to free().
	If the multiplication of nmemb and size would result in integer overflow,
	then calloc() returns an error.
	By contrast, an integer overflow would not be detected in the following
	call to malloc(), with the result that an incorrectly sized block of
	memory would be allocated:

	malloc(nmemb * size);

RETURN VALUE
	The malloc() and calloc() functions return a pointer to the allocated
	memory, which is suitably aligned for any built-in type.
	On error, these functions return NULL.
	NULL may also be returned by a successful call to malloc() with a size of
	zero, or by a successful call to calloc() with nmemb or size equal to zero.
*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}
