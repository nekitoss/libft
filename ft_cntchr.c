/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nekitoss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 16:58:14 by nekitoss          #+#    #+#             */
/*   Updated: 2017/04/20 16:58:18 by nekitoss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** function counts number of occurence of char in string
** if string is not given it returns -1
*/

#include "libft.h"

int				ft_cntchr(char *str, char c)
{
	int res;

	res = 0;
	if (str)
	{
		while (*str != '\0')
		{
			if (*str == c)
				res++;
			str++;
		}
		return (res);
	}
	return (-1);
}
