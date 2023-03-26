/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralukasi <ralukasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:36:28 by ralukasi          #+#    #+#             */
/*   Updated: 2022/12/22 16:18:56 by ralukasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned const char	*s;
	unsigned char		*d;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	i = 0;
	if (!dest && !src && n > 0)
		return (0);
	while (i < n)
	{
		*(d++) = *(s++);
		i++;
	}
	return ((char *)dest);
}
/*
#include <stdio.h>
#include <string.h>

int main (void) 
{
	char src[50] = "GeeksforGeeks";
	char dest[100] = "ppzzzzzzzpppppppppppzzzzzzzzpzzppp";
	ft_memcpy(dest, src, strlen(src));
	printf("Copied string is %s\n", src);
	for (unsigned int i=0; i < strlen(dest); i++)
		printf("%c\n", dest[i]);
		
 	int isrc[] = {10, 20, 30, 40, 50};
	int n = sizeof(isrc)/sizeof(isrc[0]);
	int idest[n], i;
	// ft_memcpy(idest, isrc, sizeof(isrc));
 	printf("\nCopied array is ");
	for (i=0; i<n; i++)
		printf("%d ", idest[i]);

	char psrc[100] = "GeeksforGeeks";
	ft_memcpy(psrc+5, psrc, strlen(psrc)+1);
	printf("\nHello: %s", psrc);  
	return 0;
} 
*/