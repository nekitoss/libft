/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nekitoss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 19:53:00 by nekitoss          #+#    #+#             */
/*   Updated: 2016/12/01 19:53:00 by nekitoss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)malloc(size);
	if (ptr)
	{
		ft_bzero(ptr, size);
	}
	else
	{
		write(2, "\nCannot allocate memory in ft_memalloc!\n", 40);
	}
	return ((void *)ptr);
}
