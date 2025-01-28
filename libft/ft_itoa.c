/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:53:11 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:53:14 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	shorter(int n, long nbl, int size, char *str)
{
	int	i;

	i = 0;
	if (n < 0)
		str[i++] = '-';
	while (size != 0)
	{
		str[i] = (nbl / size) + '0';
		nbl %= size;
		size /= 10;
		i++;
	}
}

char	*ft_itoa(int n)
{
	long	nbl;
	char	*str;
	int		i;
	int		size;

	i = 1;
	size = 1;
	nbl = n;
	if (nbl < 0)
	{
		nbl *= -1;
		i++;
	}
	while (nbl / size >= 10)
	{
		size *= 10;
		i++;
	}
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	shorter(n, nbl, size, str);
	return (str);
}
