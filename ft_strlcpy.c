/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralukasi <ralukasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:27:00 by ralukasi          #+#    #+#             */
/*   Updated: 2022/12/22 15:13:12 by ralukasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	while (src[length] != '\0')
		length++;
	if (size < 1)
		return (length);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (length);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	str[] = "Copy me from here";
	char	rts[] = "To there";
	char	str1[] = "Copy me from here";
	char	rts1[] = "To there";
	int	size = 2;
	printf("%d\n", ft_strlcpy(str, rts, size));
	printf("%d", strncpy(str1, rts1, size));
	return (0);
}*/
