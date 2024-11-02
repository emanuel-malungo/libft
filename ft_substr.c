/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:51:41 by emalungo          #+#    #+#             */
/*   Updated: 2024/11/02 12:12:45 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;
	size_t	str_len;

	str_len = ft_strlen(s);
	if (start >= str_len)
		return ((char *)ft_calloc(1, sizeof(char)));
	if (start + len > str_len)
		len = str_len - start;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	i = -1;
	while (++i < len)
		substr[i] = s[start + i];
	return (substr);
}
