/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:14:30 by emalungo          #+#    #+#             */
/*   Updated: 2024/10/29 08:36:17 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*d;
	const char		*s;

	d = (char *)dest;
	s = (const char *)src;
	if (d == s)
		return (dest);
	while (n--)
		*d++ = *s++;
	return (dest);
}
