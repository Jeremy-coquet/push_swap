/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:55:10 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:55:12 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		size;
	int		i;

	i = 0;
	if (s1 != NULL)
	{
		size = ft_strlen(s1);
		copy = (char *)malloc((sizeof(char) * size) + 1);
		if (!copy)
			return (NULL);
		while (s1[i])
		{
			copy[i] = s1[i];
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
	return (NULL);
}
