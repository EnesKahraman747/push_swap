/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekahram <sekahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:08:59 by sekahram          #+#    #+#             */
/*   Updated: 2023/03/10 15:57:12 by sekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_symbol_check(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] == '+' || arg[i] == '-')
		{
			if (!ft_is_digit(arg[i + 1]))
			{
				ft_print("Symbol erroor || Error\n");
				exit(1);
			}
			if (i > 0 && arg[i - 1] != ' ')
			{
				ft_print("Symbol Error\n");
				exit(1);
			}
		}
		i++;
	}
}

void	ft_first_pick(t_stack *stack)
{
	ft_a_len(stack);
	ft_malloc(stack);
	ft_split(stack);
	ft_int_control(stack);
}

void	ft_a_len(t_stack *stack)
{
	int	i;

	i = 1;
	while (stack->av[i])
	{
		stack->size += ft_count(stack->av[i]) * sizeof(int);
		i++;
	}
	stack->a_len = stack->size / sizeof(int);
}

int	ft_count(char *arg)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (arg[i])
	{
		if (arg[i] != ' ')
		{
			count++;
			while (arg[i] != ' ' && arg[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

void	ft_malloc(t_stack *stack)
{
	stack->arr_a = malloc(stack->size);
	if (!stack->arr_a)
	{
		ft_print("allocate error\n");
		exit(1);
	}
	stack->arr_b = malloc(stack->size);
	if (!stack->arr_b)
	{
		free(stack->arr_a);
		ft_print("allocate error\n");
		exit(1);
	}
}
