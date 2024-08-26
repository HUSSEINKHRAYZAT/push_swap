/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhrayza <hkhrayza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:34:20 by hkhrayza          #+#    #+#             */
/*   Updated: 2024/07/20 18:34:20 by hkhrayza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

int	ft_handle_pointer(va_list ap)
{
	void	*n;

	n = va_arg(ap, void *);
	write(1, "0x", 2);
	return (ft_putnbr_base((unsigned long long)n, "0123456789abcdef") + 2);
}
