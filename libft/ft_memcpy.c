/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:53:26 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:53:28 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*src_cpy;
	char		*dst_cpy;

	if (!dst)
		return (NULL);
	if (!src)
		return (dst);
	src_cpy = (const char *)src;
	dst_cpy = (char *)dst;
	while (n--)
		dst_cpy[n] = src_cpy[n];
	return (dst);
}
