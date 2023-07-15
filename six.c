/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   six.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekahram <sekahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:35:51 by sekahram          #+#    #+#             */
/*   Updated: 2023/03/09 19:21:59 by sekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack)
{
	int	swap;

	if (stack->a_len > 1)
	{
		swap = stack->arr_a[0];
		stack->arr_a[0] = stack->arr_a[1];
		stack->arr_a[1] = swap;
		ft_print("sa\n");
	}
}

void	rra(t_stack *stack)
{
	int	i;
	int	temp;

	if (stack->a_len > 1)
	{
		temp = stack->arr_a[stack->a_len - 1];
		i = stack->a_len - 1;
		while (i > 0)
		{
			stack->arr_a[i] = stack->arr_a[i - 1];
			i--;
		}
		stack->arr_a[i] = temp;
		ft_print("rra\n");
	}
}

void	ft_bit(t_stack *stack)
{
	int	max_number;

	max_number = stack->a_len;
	while (max_number)
	{
		max_number = max_number >> 1;
		stack->bit_count++;
	}
}

void	ft_radix(t_stack *stack)
{
	int	i;
	int	j;
	int	a_len;

	a_len = stack->a_len;
	i = 0;
	while (i < stack->bit_count)
	{
		j = 0;
		while (j < a_len)
		{
			if ((stack->arr_a[0] >> i) & 1)
				ra(stack);
			else
				pb(stack);
			j++;
		}
		while (stack->b_len)
			pa(stack);
		i++;
	}
}

void	pb(t_stack *stack)
{
	int	i;

	if (stack->a_len > 0)
	{
		i = stack->b_len;
		while (i > 0)
		{
			stack->arr_b[i] = stack->arr_b[i - 1];
			i--;
		}
		stack->arr_b[0] = stack->arr_a[0];
		stack->b_len += 1;
		stack->a_len -= 1;
		i = 0;
		while (i < stack->a_len)
		{
			stack->arr_a[i] = stack->arr_a[i + 1];
			i++;
		}
	}
	ft_print("pb\n");
}
