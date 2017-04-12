/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nekitoss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 19:57:48 by nekitoss          #+#    #+#             */
/*   Updated: 2017/04/05 19:57:52 by nekitoss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**function works same as ft_strjoin,
**but takes 3rd parameter, which shows what string to free:
**0 - no free
**1 - free first string
**2 - free second string
**3 - free BOTH strings
*/

#include "libft.h"

char	*ft_strjoin_d(char **s1, char **s2, int del)
{
	char	*new_str;
	size_t	i;

	i = 0;
	if (*s1 && *s2)
	{
		new_str = ft_strnew(ft_strlen(*s1) + ft_strlen(*s2) + 1);
		if (new_str)
		{
			while (**s1)
				new_str[i++] = **s1++;
			while (**s2)
				new_str[i++] = **s2++;
			(del == 1 || del == 3) ? ft_strdel(s1) : 0;
			(del == 2 || del == 3) ? ft_strdel(s2) : 0;
			return (new_str);
		}
	}
	return (NULL);
}
