/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralukasi <ralukasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:48:05 by ralukasi          #+#    #+#             */
/*   Updated: 2022/11/30 11:54:52 by ralukasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)
{
	if (a >= 'a' && a <= 'z')
		return (2);
	if (a >= 'A' && a <= 'Z')
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
int main(void)
{
	int a;
	a = '5';
	printf("%d", isalpha(a));
    	return 0;
}*/
