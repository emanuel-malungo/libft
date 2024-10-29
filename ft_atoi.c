/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:29:37 by emalungo          #+#    #+#             */
/*   Updated: 2024/10/29 11:02:28 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	parse_number(const char *str, int sign)
{
	long	res;
	long	previuos;

	res = 0;
	previuos = 0;
	while (*str >= '0' && *str <= '9')
	{
		previuos = res;
		res = res * 10 + *str - '0';
		if (previuos > res)
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
		str++;
	}
	return (res * sign);
}

int	ft_atoi(const char *nptr)
{
	int	sign;

	sign = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr == '0')
		nptr++;
	return (parse_number(nptr, sign));
}
