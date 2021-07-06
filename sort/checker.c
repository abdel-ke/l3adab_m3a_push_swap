/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:49:08 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/03 16:07:31 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		count_stack(t_stack *stack)
{
	int i = 0;	
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

int		ft_checker(t_stack *stack)
{
	if (stack == NULL)
		return (0);

	while (stack->next)
	{
			if (stack->nbr > stack->next->nbr)
				return (0);
		stack = stack->next;
	}
	return (1);
}
