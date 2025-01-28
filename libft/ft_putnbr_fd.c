/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:54:21 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:54:23 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbl;

	nbl = n;
	if (nbl < 0)
	{
		ft_putchar_fd('-', fd);
		nbl *= -1;
	}
	if (nbl >= 10)
	{
		ft_putnbr_fd((nbl / 10), fd);
		ft_putnbr_fd((nbl % 10), fd);
	}
	else
		ft_putchar_fd((nbl + '0'), fd);
}
