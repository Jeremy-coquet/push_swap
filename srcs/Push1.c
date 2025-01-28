/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:51:01 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:51:04 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	first_node_a(t_ptr *ptr)
{
	ptr->head_a = ptr->head_b;
	ptr->tail_a = ptr->head_a;
	ptr->tail_b->next = ptr->head_b->next;
	ptr->head_b = ptr->head_b->next;
	ptr->head_a->prev = ptr->tail_a;
	ptr->head_a->next = ptr->tail_a;
	ptr->head_b->prev = ptr->tail_b;
}

void	first_node_b(t_ptr *ptr)
{
	ptr->head_b = ptr->head_a;
	ptr->tail_b = ptr->head_b;
	ptr->tail_a->next = ptr->head_a->next;
	ptr->head_a = ptr->head_a->next;
	ptr->head_a->prev = ptr->tail_a;
	ptr->head_b->prev = ptr->tail_b;
	ptr->head_b->next = ptr->tail_b;
}
