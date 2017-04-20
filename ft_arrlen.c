/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nekitoss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 19:55:47 by nekitoss          #+#    #+#             */
/*   Updated: 2017/04/20 19:55:48 by nekitoss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function counts number of cells(rows, pointers) in
** two-dimensional array, which is terminated with NULL.
*/

#include "libft.h"

size_t			ft_arrlen(void **arr)
{
	size_t	len;
	void	*tmp;

	tmp = NULL;
	len = 0;
	if (arr && *arr)
	{
		tmp = *arr;
		while (tmp != NULL)
		{
			tmp++;
			len++;
		}
	}
	return (len);
}
