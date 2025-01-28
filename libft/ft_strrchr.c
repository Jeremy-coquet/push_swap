/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:56:23 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:56:25 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	int			i;

	i = 0;
	if (s != NULL)
	{
		i = ft_strlen((char *)s);
		ptr = s;
		while (*ptr)
			ptr++;
		if ((unsigned char)c == '\0')
			return ((char *)ptr);
		while (i >= 0)
		{
			if (*ptr == (unsigned char)c)
				return ((char *)ptr);
			ptr--;
			i--;
		}
	}
	return (NULL);
}
