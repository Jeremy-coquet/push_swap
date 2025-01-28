/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:54:55 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:54:57 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_pf(char *str, size_t *count)
{
	if (!str)
		str = "(null)";
	write(1, str, ft_strlen(str));
	*count += ft_strlen(str);
}
