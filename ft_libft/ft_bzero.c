/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktroude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:55:06 by ktroude           #+#    #+#             */
/*   Updated: 2021/10/25 19:05:22 by ktroude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*a;
	int		i;

	a = s;
	i = 0;
	if (n == 0)
		return ;
	while (n != 0)
	{
		a[i] = 0;
		i++;
		n--;
	}
	s = a;
}
