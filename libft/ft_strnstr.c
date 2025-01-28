/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:56:18 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:56:20 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	g;

	i = 0;
	g = 0;
	if (! haystack || !needle)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		g = 0;
		while (haystack[i] && haystack[i] == needle[g] && (i < len))
		{
			i++;
			g++;
		}
		if (!needle[g])
			return ((char *)&haystack[(i - g)]);
		i = (i - g) + 1;
	}
	return (NULL);
}
