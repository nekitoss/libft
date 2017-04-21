/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extarr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nekitoss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 19:33:27 by nekitoss          #+#    #+#             */
/*   Updated: 2017/04/20 19:33:29 by nekitoss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function allocates new memory for array of pointers of defined number
** of cells, copies number of defined pointers,
** free old array
** and returns pointer to new extended array.
*/

#include "libft.h"

void			**ft_extarr(void **old, size_t num)
{
	void	**new;

	new = NULL;
	if (old)
	{
		new = ft_newarr(num);
		new = ft_memmove(new, old,
			sizeof(void *) * MIN((ft_arrlen(old)), num));
		free(old);
		old = NULL;
		return (new);
	}
	return (ft_newarr(num));
}
