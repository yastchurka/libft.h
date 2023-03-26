/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralukasi <ralukasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:48:17 by ralukasi          #+#    #+#             */
/*   Updated: 2022/11/30 11:56:24 by ralukasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int a)
{
	return (a >= 0 && a <= 127);
}
/*
#include <stdio.h>
int main(void)
{
	int a;
	a = '1';
	printf("%d", ft_isascii(a));
    	return 0;
}*/
