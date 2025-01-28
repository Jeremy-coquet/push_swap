/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:52:04 by jcoquet           #+#    #+#             */
/*   Updated: 2024/05/06 10:52:06 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct s_list
{
	int				value;
	int				pos;
	struct s_list	*prev;
	struct s_list	*next;
}				t_list;

typedef struct s_ptr
{
	struct s_list	*head_a;
	struct s_list	*tail_a;
	struct s_list	*head_b;
	struct s_list	*tail_b;
}				t_ptr;

void	ra(t_ptr *ptr, int i);
void	rb(t_ptr *ptr, int i);
void	rr(t_ptr *ptr);
void	rra(t_ptr *ptr, int i);
void	rrb(t_ptr *ptr, int i);
void	rrr(t_ptr *ptr);
void	pa(t_ptr *ptr);
void	pb(t_ptr *ptr);
void	sa(t_ptr *ptr, int i);
void	sb(t_ptr *ptr, int i);
void	ss(t_ptr *ptr);

void	init_ptrs(t_ptr *ptr);
void	get_pos(t_ptr *ptr, int size);
void	printlist_a(t_ptr ptr);
void	printlist_b(t_ptr ptr);
t_list	*ft_lstnew(int value);
int		list_is_sorted(t_ptr *ptr);
void	first_node_a(t_ptr *ptr);
void	first_node_b(t_ptr *ptr);
void	ft_lstclear(t_list *stack_a);

void	choose_algo(int i, t_ptr ptr);
void	small_number2(t_ptr *ptr);
void	small_number3(t_ptr *ptr);
void	medium_number4(t_ptr *ptr);
void	medium_number5(t_ptr *ptr);
void	radix(t_ptr *ptr, int i);

void	ft_error(t_list *head_a);

#endif