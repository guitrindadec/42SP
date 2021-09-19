/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrindad <gtrindad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:19:46 by gtrindad          #+#    #+#             */
/*   Updated: 2021/08/26 23:33:49 by gtrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	toupper

SYNOPSIS
	#include <ctype.h>

	int toupper(int c);

DESCRIPTION
	This function convert lowercase letters to uppercase.

RETURN VALUE
	The value returned is that of the converted letter, or c if the
	conversion was not possible.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
