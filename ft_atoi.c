/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralukasi <ralukasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:38:01 by ralukasi          #+#    #+#             */
/*   Updated: 2022/12/13 15:38:03 by ralukasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((((char *)str)[i] >= 9 && ((char *)str)[i] <= 13)
		|| ((((char *)str)[i] == 32) && ((char *)str)[i]))
		i++;
	if (((char *)str)[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (((char *)str)[i] == '+')
		i++;
	while ((((char *)str)[i] >= '0' && ((char *)str)[i] <= '9')
		&& ((char *)str)[i])
	{
		result = result * 10 + (((char *)str)[i] - '0');
		i++;
	}
	return (result * sign);
}
