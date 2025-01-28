/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:53:46 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:53:49 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_treat_input(const char *type, size_t *count, va_list args)
{
	if (*type == 'c')
		ft_putchar_pf(va_arg(args, int), count);
	else if (*type == 's')
		ft_putstr_pf(va_arg(args, char *), count);
	else if (*type == 'p')
		ft_putptr_pf(va_arg(args, void *), count);
	else if (*type == 'd' || *type == 'i')
		ft_putnbr_pf(va_arg(args, int), count);
	else if (*type == 'u')
		ft_putnbr_u_pf(va_arg(args, unsigned int), count);
	else if (*type == 'x' || *type == 'X')
		ft_puthex_pf(type, va_arg(args, unsigned int), count);
	else if (*type == '%')
		ft_putchar_pf('%', count);
	else if (*type != '\0')
		ft_putchar_pf(*type, count);
	else
		return (-1);
	return (1);
}

void	ft_shorting(const char *input, size_t *count, va_list args)
{
	while (*input)
	{
		if (*input == '%' && *input + 1 != '\0')
		{
			input++;
			while (*input == ' ')
				input++;
			if (ft_treat_input((char *)input, count, args) == 1)
				input++;
			else
				break ;
		}
		else if (*input != '%')
		{
			ft_putchar_pf(*input, count);
			input++;
		}
	}
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	size_t	count;

	count = 0;
	va_start (args, input);
	if (!input)
		return (count);
	ft_shorting(input, &count, args);
	va_end (args);
	return ((int)count);
}

// int	main(void)
// {
// 	void	*ptr;

// 	ptr = "je suis beau";
// 	printf("\n%i", ft_printf("\nhello%p", ptr));
// 	printf("\n%i", printf("\nhello%p", ptr));
// }
