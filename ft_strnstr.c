/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralukasi <ralukasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:19:18 by ralukasi          #+#    #+#             */
/*   Updated: 2022/12/31 12:58:09 by ralukasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len && little[j] != '\0')
			j++;
		if (little[j] == '\0')
			return (&((char *)big)[i]);
		i++;
	}
	return (0);
}

/*  int main(void)
{
	// char haystack[] = "lorem ipsum dolor sit amet"; //"@@ -1,5 +1,5 @@";
	// char needle[] = "ipsumm";
	// printf("%d", strnstr(haystack, needle, 30));

	printf("\n------------\n");

	char str[] = "lorem ipsum dolor sit amet";
	char to_find[] = "d";
	printf("\n------------\n");
	printf("%s\n", ft_strnstr(str, to_find, 15));
}   */
