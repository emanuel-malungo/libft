/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:33:52 by emalungo          #+#    #+#             */
/*   Updated: 2024/10/06 15:11:15 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) -1;
	while (i-- >= 0)
		if (s[i] == c)
			return ((char *)&s[i]);
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
