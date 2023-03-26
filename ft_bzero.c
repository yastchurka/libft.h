/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralukasi <ralukasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:37:14 by ralukasi          #+#    #+#             */
/*   Updated: 2022/12/13 17:56:37 by ralukasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char	*st;

	st = s;
	i = 0;
	while (i < n)
	{
		st[i] = '\0';
		i++;
	}
}

/*
#include <stdio.h>
int main (void) 
{
    char buffer[100] = "Testing the bzero function.";
    printf("Before bZero function: %s\n", buffer);
    bzero(buffer, 100);
    printf("After bZero function: %s\n", buffer);
    
    printf("--- AS ABOVE SO BELOW ---\n");
    
    char buffer1[100] = "Testing the bzero function.";
    printf("Before bZero function: %s\n", buffer1);
    ft_bzero(buffer1, 100);
    printf("After bZero function: %s\n", buffer1);
    return 0;
}
*/
