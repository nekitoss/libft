/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newarr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nekitoss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 19:26:48 by nekitoss          #+#    #+#             */
/*   Updated: 2017/04/20 19:26:51 by nekitoss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function creates array of pointers + 1
** last cell is NULL
*/

#include "libft.h"

void			**ft_newarr(size_t num)
{
	return ((void **)ft_memalloc(sizeof(void *) * (num + 1)));
}
