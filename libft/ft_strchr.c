/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:55:05 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:55:07 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*ptr;

	if (s != NULL)
	{
		ptr = s;
		while (*ptr)
		{
			if (*ptr == (unsigned char)c)
				return ((char *)ptr);
			ptr++;
		}
		if ((unsigned char)c == '\0')
			return ((char *)ptr);
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*s;
// 	int			c;

// 	s = "je pu du cul";
// 	c = 'c' + 256;
// 	printf("%s", ft_strchr(s, c));
// 	return (0);
// }
