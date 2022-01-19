/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:39:16 by mes-sadk          #+#    #+#             */
/*   Updated: 2021/12/21 18:06:47 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_putchar(int c, bool o)
{
	int static	n_out;
	int			rest;

	rest = n_out;
	if (!o)
	{
		n_out = 0;
		return (rest);
	}
	write(1, &c, 1);
	return (n_out++);
}
