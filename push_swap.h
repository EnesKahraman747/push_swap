/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekahram <sekahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:10:45 by sekahram          #+#    #+#             */
/*   Updated: 2023/03/10 16:01:56 by sekahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct stack
{
	char	**av;
	int		ac;
	int		bit_count;
	int		a_len;
	int		b_len;
	int		size;
	int		*arr_a;
	int		*arr_b;
}				t_stack;

void	ft_stack_fix(t_stack *stack);
void	ft_push_push(t_stack *stack);
void	ft_arg_check(char *arg);
void	ft_space_check(char *arg);
void	ft_symbol_check(char *arg);

void	ft_first_pick(t_stack *stack);
void	ft_a_len(t_stack *stack);
int		ft_count(char *arg);
void	ft_malloc(t_stack *stack);

void	ft_split(t_stack *stack);
void	ft_insert_number(t_stack *stack, char *arg, int *arr_idx);
long	ft_atoi(char *str);
void	ft_range(t_stack *stack, long number);
void	ft_int_control(t_stack *stack);

void	ft_queqe(t_stack *stack);
int		*ft_alg(t_stack *stack);
int		*ft_cpy(int *array, t_stack *stack);
int		*ft_fix(int *array, int n);
void	ft_index(t_stack *stack, int *array);

void	ft_mini_sort(t_stack *stack);
void	ra(t_stack *stack);
int		ft_control_index(t_stack *stack);
void	ft_mini_two(t_stack *stack);
void	sa(t_stack *stack);
void	rra(t_stack *stack);
void	ft_bit(t_stack *stack);
void	pb(t_stack *stack);
void	pa(t_stack *stack);
void	ft_radix(t_stack *stack);
void	ft_char_check(char *arg);

int		ft_is_digit(char c);
void	ft_print(char *str);

#endif
