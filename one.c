/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekahram <sekahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:10:26 by sekahram          #+#    #+#             */
/*   Updated: 2023/03/10 16:00:08 by sekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_fix(t_stack *stack)
{
	stack->a_len = 0;
	stack->b_len = 0;
	stack->arr_a = 0;
	stack->arr_b = 0;
	stack->size = 0;
	stack->bit_count = 0;
}

void	ft_push_push(t_stack *stack)
{
	int	i;

	i = 1;
	while (i < stack->ac)
	{
		ft_arg_check(stack->av[i]);
		ft_space_check(stack->av[i]);
		ft_symbol_check(stack->av[i]);
		ft_char_check(stack->av[i]);
		i++;
	}
}

void	ft_arg_check(char *arg)
{
	if (*arg == '\0')
	{
		ft_print("Null Error\n");
		exit(1);
	}
}

void	ft_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_space_check(char *arg)
{
	int	i;
	int	x;

	x = 1;
	i = 0;
	while (arg[i] && x == 1)
	{
		if (arg[i] != ' ')
			x = 0;
		i++;
	}
	if (x)
	{
		ft_print("Space Error | Error\n");
		exit(1);
	}
}
