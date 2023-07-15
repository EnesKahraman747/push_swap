/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekahram <sekahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 22:42:36 by sekahram          #+#    #+#             */
/*   Updated: 2023/03/10 14:47:51 by sekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_split(t_stack *stack)
{
	int	i;
	int	arr_idx;

	arr_idx = 0;
	i = 1;
	while (stack->av[i])
	{
		ft_insert_number(stack, stack->av[i], &arr_idx);
		i++;
	}
}

void	ft_insert_number(t_stack *stack, char *arg, int *arr_idx)
{
	long	number;

	while (*arg)
	{
		if (*arg != ' ')
		{
			number = ft_atoi(arg);
			ft_range(stack, number);
			stack->arr_a[*arr_idx] = (int)number;
			while (*arg && *arg != ' ')
				arg++;
			(*arr_idx)++;
		}
		else
			arg++;
	}
}

long	ft_atoi(char *str)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && *str != ' ')
		result = (10 * result) + *str++ - '0';
	return (result * sign);
}

void	ft_range(t_stack *stack, long number)
{
	if (number > INT_MAX || number < INT_MIN)
	{
		free(stack->arr_a);
		free(stack->arr_b);
		ft_print("MAX MİN | error\n");
		exit(1);
	}
}
