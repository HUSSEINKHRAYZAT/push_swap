/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_both.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhrayza <hkhrayza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:41:06 by hkhrayza          #+#    #+#             */
/*   Updated: 2024/07/20 18:41:06 by hkhrayza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rotate_both(t_stack_node **a,
						t_stack_node **b,
						t_stack_node *cheapest_node)
{
	while (*b != cheapest_node->target_node
		&& *a != cheapest_node)
		rr(a, b, false);
	current_index(*a);
	current_index(*b);
}

void	rev_rotate_both(t_stack_node **a,
								t_stack_node **b,
								t_stack_node *cheapest_node)
{
	while (*b != cheapest_node->target_node
		&& *a != cheapest_node)
		rrr(a, b, false);
	current_index(*a);
	current_index(*b);
}
