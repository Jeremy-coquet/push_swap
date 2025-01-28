/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Small_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:50:41 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:50:43 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	small_number2(t_ptr *ptr)
{
	if (ptr->head_a->value > ptr->head_a->next->value)
		ra(ptr, 1);
}

void	small_number3(t_ptr *ptr)
{
	if (ptr->head_a->value < ptr->head_a->next->value
		&& ptr->head_a->next->value < ptr->head_a->prev->value)
		return ;
	else if (ptr->head_a->value > ptr->head_a->next->value
		&& ptr->head_a->next->value > ptr->head_a->prev->value)
	{
		sa(ptr, 1);
		rra(ptr, 1);
	}
	else if (ptr->head_a->value < ptr->head_a->prev->value
		&& ptr->head_a->prev->value < ptr->head_a->next->value)
	{
		sa(ptr, 1);
		ra(ptr, 1);
	}
	else if (ptr->head_a->next->value < ptr->head_a->value
		&& ptr->head_a->value < ptr->head_a->prev->value)
		sa(ptr, 1);
	else if (ptr->head_a->next->value < ptr->head_a->prev->value
		&& ptr->head_a->prev->value < ptr->head_a->value)
		ra(ptr, 1);
	else if (ptr->head_a->prev->value < ptr->head_a->value
		&& ptr->head_a->value < ptr->head_a->next->value)
		rra(ptr, 1);
}

void	medium_number4(t_ptr *ptr)
{
	while (1)
	{
		if (ptr->head_a->pos == 1)
		{
			pb(ptr);
			break ;
		}
		ra(ptr, 1);
	}
	small_number3(ptr);
	pa(ptr);
}

void	medium_number5(t_ptr *ptr)
{
	while (1)
	{
		if (ptr->head_a->pos == 1 || ptr->head_a->pos == 2)
		{
			pb(ptr);
			break ;
		}
		ra(ptr, 1);
	}
	while (1)
	{
		if (ptr->head_a->pos == 1 || ptr->head_a->pos == 2)
		{
			pb(ptr);
			break ;
		}
		ra(ptr, 1);
	}
	if (ptr->head_b->value < ptr->head_b->next->value)
		rb(ptr, 1);
	small_number3(ptr);
	pa(ptr);
	pa(ptr);
}
