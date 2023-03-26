/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralukasi <ralukasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:52:44 by ralukasi          #+#    #+#             */
/*   Updated: 2022/12/16 13:08:38 by ralukasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(dst) + ft_strlen((char *)src);
	if (size <= ft_strlen(dst))
		return (ft_strlen((char *) src) + size);
	if (size == '\0')
		return (ft_strlen((char *) src));
	while (*dst)
		dst++;
	i = 0;
	while ((i < size - (len - ft_strlen((char *)src)) - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

/* #include <string.h>
#include <stdio.h>
int main(void)
{
	unsigned int size;
	char dest[15];
	memset(dest, 'r', 15);
	size = 5;
	
	char src[] = "lorem ipsum dolor sit amet";
	ft_strlcat(dest, src, size);
	printf("%s\n", dest);
	printf("%d\n", ft_strlcat(dest, src, 15));
} */
