/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:51:07 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:51:10 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	last_node_a(t_ptr *ptr)
{
	ptr->head_a->prev = ptr->head_b;
	ptr->head_a = ptr->head_b;
	ptr->head_b->next = ptr->tail_a->next;
	ptr->tail_a->next = ptr->head_a;
	ptr->head_b->prev = ptr->tail_a;
	ptr->head_b = NULL;
	ptr->tail_b = NULL;
}

static void	last_node_b(t_ptr *ptr)
{
	ptr->head_b->prev = ptr->head_a;
	ptr->head_b = ptr->head_a;
	ptr->head_a->next = ptr->tail_b->next;
	ptr->tail_b->next = ptr->head_b;
	ptr->head_a->prev = ptr->tail_b;
	ptr->head_a = NULL;
	ptr->tail_a = NULL;
}

void	pa(t_ptr *ptr)
{
	t_list	*tmp;

	tmp = ptr->head_a;
	if (!ptr->head_b)
		return ;
	if (!ptr->head_a)
	{
		first_node_a(ptr);
	}
	else if (ptr->head_b->next == ptr->head_b)
		last_node_a(ptr);
	else
	{
		ptr->tail_a->next = ptr->head_b;
		ptr->head_a = ptr->head_b;
		ptr->tail_b->next = ptr->head_b->next;
		ptr->head_b->next->prev = ptr->tail_b;
		ptr->head_b = ptr->head_b->next;
		ptr->head_a->next = tmp;
		ptr->head_a->prev = ptr->tail_a;
		tmp->prev = ptr->head_a;
	}
	ft_printf("pa\n");
}

void	pb(t_ptr *ptr)
{
	t_list	*tmp;

	tmp = ptr->head_b;
	if (!ptr->head_a)
		return ;
	if (!ptr->head_b)
	{
		first_node_b(ptr);
	}
	else if (ptr->head_a->next == ptr->head_a)
		last_node_b(ptr);
	else
	{
		ptr->tail_b->next = ptr->head_a;
		ptr->head_b = ptr->head_a;
		ptr->tail_a->next = ptr->head_a->next;
		ptr->head_a->next->prev = ptr->tail_a;
		ptr->head_a = ptr->head_a->next;
		ptr->head_b->next = tmp;
		ptr->head_b->prev = ptr->tail_b;
		tmp->prev = ptr->head_b;
	}
	ft_printf("pb\n");
}

// pa (push a) : Prend le premier élément au sommet de b et le met sur a.
// Ne fait rien si b est vide.
// pb (push b) : Prend le premier élément au sommet de a et le met sur b.
// Ne fait rien si a est vide.