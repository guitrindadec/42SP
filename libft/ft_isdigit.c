/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrindad <gtrindad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:52:39 by gtrindad          #+#    #+#             */
/*   Updated: 2021/08/26 23:32:33 by gtrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
	isdigit

SYNOPSIS
	int isdigit(int c);

DESCRIPTION
	checks for a digit (0 through 9).
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
