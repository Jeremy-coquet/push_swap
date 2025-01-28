/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:53:16 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:53:18 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ptr;

	if (s != NULL)
	{
		ptr = (const char *)s;
		while (n--)
		{
			if (*ptr == (char)c)
				return ((char *)ptr);
			ptr++;
		}
	}
	return (NULL);
}
