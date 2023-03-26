/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralukasi <ralukasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:31:46 by ralukasi          #+#    #+#             */
/*   Updated: 2023/01/02 15:29:25 by ralukasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	find;

	i = 0;
	find = (char) c;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (((char *)s)[i] == find)
			return (&((char *)s)[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
		char * pch;
	char str[] = "Example string";
	pch = (char*) ft_memchr(str, 'p', strlen(str));
	if (pch!=NULL)
		printf ("'p' found at position %ld.\n", pch-str+1);
	else
		printf ("'p' not found.\n");
	return 0;
}*/
