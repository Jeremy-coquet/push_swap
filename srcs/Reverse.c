/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:50:54 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:50:57 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_ptr *ptr, int i)
{
	if (!ptr->head_a || ptr->head_a->prev == ptr->head_a
		|| ptr->head_a->prev == NULL)
		return ;
	ptr->head_a = ptr->tail_a;
	ptr->tail_a = ptr->tail_a->prev;
	if (i == 1)
		ft_printf("rra\n");
}

void	rrb(t_ptr *ptr, int i)
{
	if (!ptr->head_b || ptr->head_b->prev == ptr->head_b
		|| ptr->head_b->prev == NULL)
		return ;
	ptr->head_b = ptr->head_b->prev;
	ptr->tail_b = ptr->tail_b->prev;
	if (i == 1)
		ft_printf("rrb\n");
}

void	rrr(t_ptr *ptr)
{
	rra(ptr, 0);
	rrb(ptr, 0);
	ft_printf("rrr\n");
}

// rra (reverse rotate a) : Décale d’une position vers le bas 
// tous les élements de
// la pile a. Le dernier élément devient le premier.
// rrb (reverse rotate b) : Décale d’une position vers le bas 
// tous les élements de
// la pile b. Le dernier élément devient le premier.
// rrr : rra et rrb en même temps.