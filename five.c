/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekahram <sekahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:19:01 by sekahram          #+#    #+#             */
/*   Updated: 2023/03/15 15:25:15 by sekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_index(t_stack *stack, int *array)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < stack->a_len)
	{
		j = 0;
		while (j < stack->a_len)
		{
			if (stack->arr_a[i] == array[j])
			{
				stack->arr_a[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	free(array);
}

void	ft_mini_sort(t_stack *stack)
{
	int	value;

	value = 0;
	while (value < 3)
	{
		while (stack->arr_a[0] != value)
		{
			if (ft_control_index(stack))
				break ;
			if (stack->arr_a[0] == 2 && stack->arr_a[1] == 0)
				ra(stack);
			ft_mini_two(stack);
			if (stack->arr_a[0] != value)
				rra(stack);
		}
		if (ft_control_index(stack))
			break ;
		pb(stack);
		value++;
	}
	ft_mini_two(stack);
	while (stack->b_len)
		pa(stack);
}

void	ra(t_stack *stack)
{
	int	i;
	int	temp;

	if (stack->a_len > 1)
	{
		temp = stack->arr_a[0];
		i = 0;
		while (i < stack->a_len - 1)
		{
			stack->arr_a[i] = stack->arr_a[i + 1];
			i++;
		}
		stack->arr_a[i] = temp;
		ft_print("ra\n");
	}
}

int	ft_control_index(t_stack *stack)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	while (i < stack->a_len - 1 && result)
	{
		if (stack->arr_a[i] > stack->arr_a[i + 1])
			result = 0;
		i++;
	}
	return (result);
}

void	ft_mini_two(t_stack *stack)
{
	if (stack->arr_a[0] > stack->arr_a[1])
		sa(stack);
}
