/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoquet <jcoquet@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:51:13 by jcoquet           #+#    #+#             */
/*   Updated: 2024/06/06 13:58:38 by jcoquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	already(char **argv, int new, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (ft_atoi(argv[i++]) == new)
			return (1);
	}
	return (0);
}

static int	init_stack(char **argv, int i, t_ptr *ptr)
{
	t_list	*new_node;

	while (argv[i])
	{
		new_node = ft_lstnew(ft_atoi(&argv[i][0]));
		if (ptr->head_a == NULL)
		{
			ptr->tail_a = new_node;
			ptr->head_a = new_node;
		}
		else
		{
			ptr->tail_a->next = new_node;
			new_node->prev = ptr->tail_a;
			ptr->tail_a = new_node;
		}
		i++;
	}
	ptr->tail_a->next = ptr->head_a;
	ptr->head_a->prev = ptr->tail_a;
	return (i);
}

static int	init_stack_a(char **argv, int argc, t_ptr *ptr)
{
	int		i;
	int		r;

	r = 0;
	if (argc == 2)
	{
		i = 0;
		r = 1;
	}
	else
		i = 1;
	r += init_stack(argv, i, ptr);
	if (argc == 2)
		while (argv[i])
			free(argv[i++]);
	return (r - 1);
}

static char	**check_input(char **argv, int argc, t_ptr ptr)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		argv = ft_split(argv[1], ' ');
		if (!argv)
			ft_error(ptr.head_a);
	}
	else
		i = 1;
	while (argv[i])
	{
		if ((already(argv, ft_atoi(argv[i]), i) && ft_atoi(argv[i]))
			|| (ft_atoi(argv[i]) == 2147483649))
			ft_error(ptr.head_a);
		i++;
	}
	return (argv);
}

int	main(int argc, char **argv)
{
	t_ptr	ptr;
	int		i;
	char	**argv_c;

	init_ptrs(&ptr);
	if (argc == 1)
		return (0);
	if (argc == 2)
	{
		argv_c = check_input(argv, argc, ptr);
		i = init_stack_a(argv_c, argc, &ptr);
		free(argv_c);
	}
	else
	{
		check_input(argv, argc, ptr);
		i = init_stack_a(argv, argc, &ptr);
	}
	get_pos(&ptr, i);
	if (list_is_sorted(&ptr) || i < 2)
		return (ft_lstclear(ptr.head_a), 0);
	choose_algo(i, ptr);
	return (ft_lstclear(ptr.head_a), 0);
}
