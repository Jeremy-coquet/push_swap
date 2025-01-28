/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:50:48 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:50:50 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_ptr *ptr, int i)
{
	if (!ptr->head_a || ptr->head_a->next == ptr->head_a
		|| ptr->head_a->next == NULL)
		return ;
	ptr->head_a = ptr->head_a->next;
	ptr->tail_a = ptr->tail_a->next;
	if (i == 1)
		ft_printf("ra\n");
}

void	rb(t_ptr *ptr, int i)
{
	if (!ptr->head_b || ptr->head_b->next == ptr->head_b
		|| ptr->head_b->next == NULL)
		return ;
	ptr->head_b = ptr->head_b->next;
	ptr->tail_b = ptr->tail_b->next;
	if (i == 1)
		ft_printf("rb\n");
}

void	rr(t_ptr *ptr)
{
	ra(ptr, 0);
	rb(ptr, 0);
	ft_printf("rr\n");
}

// ra (rotate a) : Décale d’une position vers le haut 
// tous les élements de la pile a.
// Le premier élément devient le dernier.
// rb (rotate b) : Décale d’une position vers le haut 
// tous les élements de la pile b.
// Le premier élément devient le dernier.
// rr : ra et rb en même temps.