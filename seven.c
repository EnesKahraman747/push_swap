/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seven.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekahram <sekahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:47:31 by sekahram          #+#    #+#             */
/*   Updated: 2023/03/10 16:05:04 by sekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *stack)
{
	int	i;

	if (stack->b_len > 0)
	{
		i = stack->a_len;
		while (i > 0)
		{
			stack->arr_a[i] = stack->arr_a[i - 1];
			i--;
		}
		stack->arr_a[0] = stack->arr_b[0];
		stack->a_len += 1;
		stack->b_len -= 1;
		i = 0;
		while (i < stack->b_len)
		{
			stack->arr_b[i] = stack->arr_b[i + 1];
			i++;
		}
	}
	ft_print("pa\n");
}

int	ft_is_digit(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

void	ft_char_check(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (!(arg[i] >= '0' && arg[i] <= '9'))
		{
			if (arg[i] != '-' && arg[i] != ' ' && arg[i] != '+')
			{
				ft_print("CHAR ERROR\n");
				exit(1);
			}
		}
		i++;
	}
}
