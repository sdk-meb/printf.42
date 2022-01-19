/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:21:43 by mes-sadk          #+#    #+#             */
/*   Updated: 2021/12/21 18:00:20 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "libft/libft.h"

const char	*sheck_rep(const char *s_rep, bool sort)
{
	while (*s_rep == '#')
		if (*(++s_rep) != '#' && *(s_rep) != 'X' && *s_rep != 'x')
			return (NULL);
	while (*s_rep == '+')
		if (*(++s_rep) != '+' && *(s_rep) != 'd' && *s_rep != 'i')
			return (NULL);
	while (*s_rep == ' ')
		if (*(++s_rep) != ' ' && *(s_rep) != 'd' && *s_rep != 'i')
			return (NULL);
	if (sort && ft_memchr("# +", *(s_rep - 1), 3))
		return (s_rep - 1);
	if (sort || !*s_rep)
		return (s_rep);
	return (s_rep + 1);
}

int	sheck_fph(const char	*fp)
{
	if (!fp)
		return (-1);
	while (*fp)
	{
		while (*fp && (*fp != '%' || (*fp == '%' && *(++fp) == '%')))
			fp++;
		if (ft_memchr("cspudixX", *fp, 8))
			fp++;
		else if (ft_memchr("# +", *fp, 3))
		{
			fp = sheck_rep(fp, 0);
			if (!fp)
				return (-1);
		}
		else if (*fp)
			return (-1);
	}
	return (0);
}

int	ft_printf(const char	*fph, ...)
{
	va_list	ap;

	if (sheck_fph(fph))
		return (-1);
	va_start(ap, fph);
	while (*fph)
	{
		while (*fph && (*fph != '%' || (*fph == '%' && *(++fph) == '%')))
			ft_putchar(*fph++, 1);
		fph = sheck_rep(fph, 1);
		if (*fph == 'c')
			ft_putchar(va_arg(ap, int), 1);
		else if (*fph == 's')
			ft_putstr(va_arg(ap, char *));
		else if (*fph == 'u')
			ft_putnbr(va_arg(ap, unsigned int), *fph);
		else if (*fph == '+' || *fph == ' ' || *fph == 'i' || *fph == 'd')
			ft_putnbr(va_arg(ap, int), *fph);
		else if (*fph == '#' || *fph == 'x' || *fph == 'X' || *fph == 'p')
			ft_puthexa((va_arg(ap, unsigned long int )), (char *)fph);
		fph = sheck_rep(fph, 0);
	}
	va_end(ap);
	return (ft_putchar('0', 0));
}
