/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nekitoss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 16:13:54 by nekitoss          #+#    #+#             */
/*   Updated: 2017/07/22 16:13:56 by nekitoss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnbr_u(size_t n)
{
	size_t len;

	len = 0;
	if (n < 10)
	{
		len += ft_putchar(n + '0');
	}
	else
	{
		len += ft_putnbr_u(n / 10);
		len += ft_putnbr_u(n % 10);
	}
	return (len);
}
