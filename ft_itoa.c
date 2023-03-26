/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralukasi <ralukasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:49:18 by ralukasi          #+#    #+#             */
/*   Updated: 2023/01/02 15:09:25 by ralukasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	leng(long number)
{
	long	nb;
	int		i;

	i = 1;
	nb = number;
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

void	reverse(long number, char*ptr, int leng_of_ptr)
{
	long	nb;
	int		len;
	int		i;

	nb = number;
	len = leng(number);
	i = 0;
	while (i < len)
	{	
		ptr[leng_of_ptr - i - 2] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	ptr[leng_of_ptr - 1] = '\0';
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		minus;
	long	f;

	f = n;
	minus = 1;
	if (f < 0)
	{
		minus++;
		f = -f;
	}
	ptr = (char *) malloc(sizeof(char) * leng(f) + minus);
	if (!ptr)
		return (0);
	if (minus > 1)
		ptr[0] = '-';
	reverse(f, ptr, (leng(f) + minus));
	return (ptr);
}
