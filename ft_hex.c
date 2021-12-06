/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 02:10:29 by mialbert          #+#    #+#             */
/*   Updated: 2021/12/06 22:25:27 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int32_t	ft_hex(uint64_t nbr, const char *hexbase)
{
	int32_t	i;

	i = 0;
	if (nbr >= 16)
	{
		i += ft_hex(nbr / 16, "0123456789abcdef");
		i += ft_hex(nbr % 16, "0123456789abcdef");
	}
	if (nbr < 16)
		i += ft_putchar(hexbase[nbr]);
	return (i);
}
