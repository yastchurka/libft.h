/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralukasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:18:19 by ralukasi          #+#    #+#             */
/*   Updated: 2022/11/29 19:18:26 by ralukasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	if (a >= 'A' && a <= 'Z')
		return (1);
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	int a;
	a = '/';
	printf("%d", ft_isalnum(a));
    	return 0;
}*/
