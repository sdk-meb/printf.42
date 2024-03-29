/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:09:20 by mes-sadk          #+#    #+#             */
/*   Updated: 2021/12/20 16:29:47 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr(long long int n, char c)
{
	if (c == ' ' && n >= 0)
		ft_putchar (' ', 1);
	else if (c == '+' && n >= 0)
		ft_putchar ('+', 1);
	if (n < 0)
	{	
		ft_putchar ('-', 1);
		n = n * (-1);
	}
	if (n >= 10)
		ft_putnbr(n / 10, '0');
	ft_putchar((n % 10) + 48, 1);
}
