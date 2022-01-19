/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:55:16 by mes-sadk          #+#    #+#             */
/*   Updated: 2021/12/20 12:42:42 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	while (len && s)
	{
		if (*(unsigned char *)s == (unsigned char) c)
			return ((void *)s);
		s++;
		len--;
	}
	return (NULL);
}
