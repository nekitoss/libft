/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newarrint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nekitoss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 21:26:18 by nekitoss          #+#    #+#             */
/*   Updated: 2017/09/07 21:26:19 by nekitoss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function creates square array of ints,
** last row (auto adds 1) is NULL
*/

#include "libft.h"

int			**ft_newarrint(size_t rows, size_t cols)
{
	int		**arr;
	size_t	i;

	i = 0;
	arr = (int **)ft_memalloc(sizeof(int *) * (rows + 1));
	while (i < rows)
	{
		arr[i] = (int *)ft_memalloc(sizeof(int) * cols);
	}
	return (arr);
}
