/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:50:17 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 11:07:20 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(t_list *stack_a)
{
	write(2, "Error\n", 6);
	if (stack_a)
		ft_lstclear(stack_a);
	exit (-1);
}

void	init_ptrs(t_ptr *ptr)
{
	ptr->head_a = NULL;
	ptr->head_b = NULL;
	ptr->tail_a = NULL;
	ptr->tail_b = NULL;
}

void	ft_lstclear(t_list *list)
{
	t_list	*tmp;
	t_list	*last;

	if (!list)
		return ;
	last = list->prev;
	while (list != last)
	{
		tmp = list->next;
		free(list);
		list = tmp;
	}
	free(list);
}

void	choose_algo(int i, t_ptr ptr)
{
	if (i == 2)
		small_number2(&ptr);
	if (i == 3)
		small_number3(&ptr);
	if (i == 4)
		medium_number4(&ptr);
	if (i == 5)
		medium_number5(&ptr);
	if (i > 5)
		radix(&ptr, i);
}
