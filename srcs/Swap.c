/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:50:30 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:50:35 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_ptr *ptr, int i)
{
	int	tmp;

	if (!ptr->head_a || ptr->head_a->next == ptr->head_a
		|| ptr->head_a->next == NULL)
		return ;
	tmp = ptr->head_a->next->value;
	tmp = ptr->head_a->next->pos;
	ptr->head_a->next->value = ptr->head_a->value;
	ptr->head_a->next->pos = ptr->head_a->pos;
	ptr->head_a->value = tmp;
	ptr->head_a->pos = tmp;
	if (i == 1)
		ft_printf("sa\n");
}

void	sb(t_ptr *ptr, int i)
{
	int	tmp;

	if (!ptr->head_b || ptr->head_b->next == ptr->head_b
		|| ptr->head_b->next == NULL)
		return ;
	tmp = ptr->head_b->next->value;
	tmp = ptr->head_b->next->pos;
	ptr->head_b->next->value = ptr->head_b->value;
	ptr->head_b->next->pos = ptr->head_b->pos;
	ptr->head_b->value = tmp;
	ptr->head_b->pos = tmp;
	if (i == 1)
		ft_printf("sb\n");
}

void	ss(t_ptr *ptr)
{
	sa(ptr, 0);
	sb(ptr, 0);
	ft_printf("ss\n");
}
