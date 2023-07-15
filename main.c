/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekahram <sekahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:00:11 by sekahram          #+#    #+#             */
/*   Updated: 2023/03/15 15:25:34 by sekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (ac == 1)
	{
		exit(0);
	}
	else
	{
		ft_stack_fix(stack);
		stack->ac = ac;
		stack->av = av;
		ft_push_push(stack);
		ft_first_pick(stack);
		ft_queqe(stack);
		ft_index(stack, ft_alg(stack));
		if (stack->a_len <= 5)
			ft_mini_sort(stack);
		else
		{
			ft_bit(stack);
			ft_radix(stack);
		}
	}
}
