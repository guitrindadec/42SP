/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrindad <gtrindad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 22:05:07 by gtrindad          #+#    #+#             */
/*   Updated: 2021/09/19 15:48:48 by gtrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int	len;

	len = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;

	len = num_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		n = 147483648;
	}
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	i = len - 1;
	while (i >= 0 && str[i] != '-' && str[i] != '2')
	{
		str[i--] = (char)(n % 10 + 48);
		n = n / 10;
	}
	str[len] = '\0';
	return (str);
}
