/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralukasi <ralukasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:53:14 by ralukasi          #+#    #+#             */
/*   Updated: 2022/12/06 18:59:40 by ralukasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*s;

	s = str;
	while (n--)
		*(s + n) = c;
	return ((void *)str);
}

/*
#include <stdio.h>
int main (void) 
{
    char str[] = "This is my destination.";
    printf("%s\n", str);
    memset(str, 'c', sizeof(char) * 10);
    printf("------\n", str);
    printf("%s\n", str);
    char str1[] = "This is my destination.";
    ft_memset(str1, 'c', sizeof(char) * 2);
    printf("%s\n", str1);
    return 0;
}*/
