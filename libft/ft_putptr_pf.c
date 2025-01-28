/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:54:42 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:54:44 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putptr_pf(void *ptr, size_t *count)
{
	const char	*type;

	type = "x";
	ft_putstr_pf("0x", count);
	ft_puthex_pf(type, (unsigned long long)ptr, count);
}
