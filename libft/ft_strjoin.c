/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:55:42 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:55:44 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		b;
	char	*str;
	int		str_len;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	b = 0;
	str_len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc((sizeof(char) * str_len) + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[b])
	{
		str[i + b] = s2[b];
		b++;
	}
	str[i + b] = '\0';
	return (str);
}
