/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nekitoss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 16:50:48 by nekitoss          #+#    #+#             */
/*   Updated: 2017/04/25 16:50:49 by nekitoss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function gets pointer on two-deminsional array
** (array of pointers) and free it.
** Array must be NULL-terminated.
*/

#include "libft.h"

void			ft_arrdel(void ***arr)
{
	size_t	len;
	void	**ptr;

	ptr = *arr;
	len = ft_arrlen(ptr);
	while (len > 0)
	{
		ft_memdel(&(ptr[len]));
		len--;
	}
	ft_memdel(&(ptr[len]));
}
