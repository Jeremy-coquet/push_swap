/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:54:08 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:54:11 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthex_pf(const char *type, unsigned long long n, size_t *count)
{
	char	*str_u;
	char	*str_l;

	if (!type)
		return ;
	str_u = "0123456789ABCDEF";
	str_l = "0123456789abcdef";
	if (*type == 'X')
		ft_putnbr_base_pf(str_u, n, count);
	if (*type == 'x')
		ft_putnbr_base_pf(str_l, n, count);
}
