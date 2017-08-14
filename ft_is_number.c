/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nekitoss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 18:13:21 by nekitoss          #+#    #+#             */
/*   Updated: 2017/08/14 18:13:23 by nekitoss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function checks if specified part of string consist only numbers
** checks until end of string or until specified position
** str[end] position is not checked
*/

int				ft_is_number(char *str, size_t start, size_t end)
{
	size_t	len;

	len = ft_strlen(str);
	if (str && len && start < len && start < end)
	{
		while (start < end && start < len)
		{
			if (!ft_isdigit(str[start]))
				return (0);
			start++;
		}
		return (1);
	}
	return (0);
}
