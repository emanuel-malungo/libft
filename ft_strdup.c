/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:37:32 by emalungo          #+#    #+#             */
/*   Updated: 2024/11/01 16:45:31 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s);
	if (len > n)
		len = n;
	str = (char *)malloc(sizeof(char *) * (len + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s, len);
	str[len] = '\0';
	return (str);
}
