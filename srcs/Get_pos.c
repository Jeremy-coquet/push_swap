/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Get_pos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:51:19 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:51:22 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <limits.h>

static void	shrink(long old_min, t_list *tmp, t_ptr *ptr, int size)
{
	long	min;
	int		i;

	min = LONG_MAX;
	i = 0;
	while (++i <= size)
	{
		tmp = ptr->head_a;
		while (tmp->next != ptr->head_a)
		{
			if (tmp->value < min && tmp->value > old_min)
			{
				min = tmp->value;
				tmp->pos = i;
			}
			tmp = tmp->next;
		}
		if (tmp->value < min && tmp->value > old_min)
		{
			min = tmp->value;
			tmp->pos = i;
		}
		old_min = min;
		min = INT_MAX;
	}
}

void	get_pos(t_ptr *ptr, int size)
{
	long	old_min;
	t_list	*tmp;

	old_min = LONG_MIN;
	tmp = ptr->head_a;
	shrink(old_min, tmp, ptr, size);
}
