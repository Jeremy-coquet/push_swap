/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:53:31 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:53:34 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*src_cpy;
	char		*dst_cpy;
	size_t		i;

	if (!dst || !src)
		return (NULL);
	src_cpy = (char *)src;
	dst_cpy = (char *)dst;
	if (dst_cpy > src_cpy)
	{
		while (len--)
			dst_cpy[len] = src_cpy[len];
	}
	else
	{
		i = 0;
		while (len--)
		{
			dst_cpy[i] = src_cpy[i];
			i++;
		}
	}
	return (dst);
}

// int	main(void)
// {  
// 	char dest[6];
// 	char src[] = "Hello, world!";
// 	size_t len = 5;
// 	memmove(dest, src, len);
// 	printf("%s", dest);
// 	return (0);
// }
