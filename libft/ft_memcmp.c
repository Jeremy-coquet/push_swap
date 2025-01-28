/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:53:22 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:53:24 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*s1_cpy;
	unsigned const char	*s2_cpy;
	size_t				i;

	i = 0;
	s1_cpy = (unsigned char *) s1;
	s2_cpy = (unsigned const char *) s2;
	while (i < n && s1_cpy[i] == s2_cpy[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1_cpy[i] - s2_cpy[i]);
}

// int main() {
//     // Deux chaînes de caractères à comparer
//     char *str1 = "Bonjour";
//     char *str2 = "";
//     char *str3 = "Salut";

//     // Comparaison des deux premières chaînes qui sont identiques
//     int res1 = ft_memcmp(str1, str2,  7);
//     printf("Comparaison de '%s' et '%s': %d\n", str1, str2, res1);

//     // Comparaison des deux dernières chaînes qui sont différentes
//     int res2 = ft_memcmp(str1, str3,  7);
//     printf("Comparaison de '%s' et '%s': %d\n", str1, str3, res2);

//     return  0;
// }