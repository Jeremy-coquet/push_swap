/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:54:30 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:54:32 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_pf(int n, size_t *count)
{
	long	nbl;

	nbl = n;
	if (nbl < 0)
	{
		ft_putchar_pf('-', count);
		nbl *= -1;
	}
	if (nbl >= 10)
	{
		ft_putnbr_pf((nbl / 10), count);
		ft_putnbr_pf((nbl % 10), count);
	}
	else
		ft_putchar_pf((nbl + '0'), count);
}
