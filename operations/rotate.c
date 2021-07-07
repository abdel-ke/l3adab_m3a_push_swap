/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 20:33:56 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/07 18:40:13 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_data *data)
{
	int temp;
	int i;

	if (data->index_a > 1)
	{
		temp = data->tab_a[0];
		i = 0;
		while (i < data->index_a - 1)
		{
			data->tab_a[i] = data->tab_a[i + 1];
			i++;
		}
		data->tab_a[i] = temp;
		ft_putendl("ra");
	}
}

void	rb(t_data *data)
{
	int temp;
	int	i;

	if (data->index_b > 1)
	{
		temp = data->tab_b[0];
		i = 0;
		while (i < data->index_b - 1)
		{
			data->tab_b[i] = data->tab_b[i + 1];
			i++;
		}
		data->tab_b[i] = temp;
		ft_putendl("rb");
	}
}
