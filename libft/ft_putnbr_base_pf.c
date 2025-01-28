/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_pf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:54:14 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:54:17 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base_pf(char *base, unsigned long long n, size_t *count)
{
	unsigned long	nbl;

	nbl = n;
	if (nbl >= ft_strlen(base))
	{
		ft_putnbr_base_pf(base, (nbl / (ft_strlen(base))), count);
		ft_putnbr_base_pf(base, (nbl % (ft_strlen(base))), count);
	}
	else
		ft_putchar_pf((base[nbl % ft_strlen(base)]), count);
}
