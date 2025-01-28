/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u_pf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:54:36 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:54:38 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_u_pf(unsigned int n, size_t *count)
{
	unsigned long	nbl;

	nbl = n;
	if (nbl >= 10)
	{
		ft_putnbr_u_pf((nbl / 10), count);
		ft_putnbr_u_pf((nbl % 10), count);
	}
	else
		ft_putchar_pf((nbl + '0'), count);
}
