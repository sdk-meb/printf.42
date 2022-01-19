/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:33:03 by mes-sadk          #+#    #+#             */
/*   Updated: 2021/12/20 23:26:22 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_puthexa(unsigned long int hex, char *s)
{
	char	*base_16;

	if (*s != 'p' && *s)
		hex = (unsigned int)hex;
	if (*s == '#' && hex)
	{
		ft_putchar('0', 1);
		ft_putchar(*(++s), 1);
	}
	if (*s == 'p')
	{
		ft_putchar('0', 1);
		ft_putchar('x', 1);
		s = "";
	}
	if (*s == 'X')
		base_16 = "0123456789ABCDEF";
	else
		base_16 = "0123456789abcdef";
	if (hex >= 16)
		ft_puthexa(hex / 16, s);
	ft_putchar(base_16[hex % 16], 1);
}
