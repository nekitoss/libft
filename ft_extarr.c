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

void			**ft_extarr(void **arr, size_t num)
{
	char	**new;
	char	**old;
	size_t	len;

	new = NULL;
	len = 0;
	old = (char **)arr;
	if (old)
	{
		new = (char **)ft_newarr(num);
		len = ft_arrlen((void *)old);
		len = MIN(len, num);
		while (len > 0)
		{
			new[len] = old[len];
			len--;
		}
		new[len] = old[len];
		free(old);
		old = NULL;
		return ((void **)new);
	}
	return (ft_newarr(num));
}
