/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mes-sadk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:30:21 by mes-sadk          #+#    #+#             */
/*   Updated: 2021/12/20 17:06:19 by mes-sadk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>

void	*ft_memchr(const void *s, int c, size_t len);
int		ft_putchar(int c, bool o);
void	ft_putstr(char *s);
void	ft_putnbr(long long int n, char c);
void	ft_puthexa(unsigned long int hex, char *s);

#endif
