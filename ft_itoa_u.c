/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nekitoss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 19:20:13 by nekitoss          #+#    #+#             */
/*   Updated: 2017/07/10 19:20:15 by nekitoss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*allocate(unsigned long long nbr, size_t *len)
{
	if (nbr)
	{
		while (nbr > 0)
		{
			nbr = nbr / 10;
			(*len)++;
		}
	}
	return (ft_strnew(*len));
}

static void	write_to_str(char *str, unsigned long long nbr, size_t pos)
{
	if (nbr > 9)
	{
		str[pos] = (nbr % 10) + '0';
		nbr = nbr / 10;
		pos--;
		write_to_str(str, nbr, pos);
	}
	else
		str[pos] = (nbr % 10) + '0';
	return ;
}

char		*ft_itoa_u(unsigned long long nbr)
{
	char	*res;
	size_t	len;

	len = 1;
	res = allocate(nbr, &len);
	if (res)
	{
		write_to_str(res, nbr, len - 1);
		return (res);
	}
	return (NULL);
}
