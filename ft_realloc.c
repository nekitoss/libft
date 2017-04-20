/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nekitoss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 18:28:53 by nekitoss          #+#    #+#             */
/*   Updated: 2017/04/20 18:28:56 by nekitoss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function allocates new memory of defined size
** copies memory by defined size,
** free old memory
** and returns pointer to new memory.
*/

#include "libft.h"

char			*ft_realloc(char **str, size_t new_len)
{
	char	*new_str;

	new_str = NULL;
	if (str && *str)
	{
		new_str = ft_memmove(ft_strnew(new_len), *str, new_len);
		ft_strdel(str);
		return (new_str);
	}
	return (ft_strnew(new_len));
}
