/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:50:23 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:58:24 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*ft_lstnew(int value)
{
	t_list	*new;

	new = (t_list *) malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->value = value;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void	printlist_a(t_ptr ptr)
{
	t_list	*tmp;

	tmp = ptr.head_a;
	if (ptr.head_a == NULL)
	{
		ft_printf("\n[NULL]\n\n");
		return ;
	}
	while (tmp->next != ptr.head_a)
	{
		ft_printf(" value [%d] pos [%d]\n", tmp->value, tmp->pos);
		tmp = tmp->next;
	}
	ft_printf(" value [%d] pos [%d]\n", tmp->value, tmp->pos);
	ft_printf("\n\n");
}

void	printlist_b(t_ptr ptr)
{
	t_list	*tmp;

	tmp = ptr.head_b;
	if (ptr.head_b == NULL)
	{
		ft_printf("\n[NULL]\n\n");
		return ;
	}
	while (tmp->next != ptr.head_b)
	{
		ft_printf(" value [%d] pos [%d]\n", tmp->value, tmp->pos);
		tmp = tmp->next;
	}
	ft_printf(" value [%d] pos [%d]\n", tmp->value, tmp->pos);
	ft_printf("\n\n");
}

int	list_is_sorted(t_ptr *ptr)
{
	t_list	*tmp;

	tmp = ptr->head_a;
	while (tmp->next != ptr->head_a)
	{
		if (tmp->value > tmp->next->value)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
