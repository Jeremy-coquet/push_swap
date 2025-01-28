/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Algo100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:51:29 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:51:31 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_max_bit(int i)
{
	int				max_bit;

	max_bit = 31;
	while (max_bit >= 0)
	{
		if (i >> max_bit & 1)
			break ;
		else
			max_bit--;
	}
	return (max_bit + 1);
}

void	radix(t_ptr *ptr, int i)
{
	int	max_bit;
	int	bit;
	int	tmp;

	bit = 0;
	max_bit = ft_max_bit(i);
	tmp = i;
	while (bit < max_bit)
	{
		while (i > 0)
		{
			if (ptr->head_a->pos >> bit & 1)
				ra(ptr, 1);
			else
				pb(ptr);
			i--;
		}
		while (ptr->head_b != NULL)
		{
			pa(ptr);
		}
		bit++;
		i = tmp;
	}
}
