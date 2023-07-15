/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekahram <sekahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:44:22 by sekahram          #+#    #+#             */
/*   Updated: 2023/03/10 14:49:04 by sekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_int_control(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->a_len - 1)
	{
		j = i + 1;
		while (j < stack->a_len)
		{
			if (stack->arr_a[i] == stack->arr_a[j])
			{
				free(stack->arr_a);
				free(stack->arr_b);
				ft_print("Diffrent Enter\n");
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	ft_queqe(t_stack *stack)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	while (i < stack->a_len - 1 && result)
	{
		if (stack->arr_a[i] > stack->arr_a[i + 1])
			result = 0;
		i++;
	}
	if (result)
	{
		free(stack->arr_a);
		free(stack->arr_b);
		exit(1);
	}
}

int	*ft_alg(t_stack *stack)
{
	int	*array;

	array = malloc(sizeof(stack->size));
	if (!array)
	{
		free(stack->arr_a);
		free(stack->arr_b);
		exit(1);
	}
	array = ft_cpy(array, stack);
	array = ft_fix(array, stack->a_len);
	return (array);
}

int	*ft_cpy(int *array, t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->a_len)
	{
		array[i] = stack->arr_a[i];
		i++;
	}
	return (array);
}

int	*ft_fix(int *array, int n)
{
	int	i;
	int	temp;

	temp = 0;
	i = 0;
	while (i < n - 1)
	{
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
	return (array);
}
