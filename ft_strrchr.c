/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralukasi <ralukasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:18:02 by ralukasi          #+#    #+#             */
/*   Updated: 2023/01/02 15:27:01 by ralukasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	find;

	find = (char) c;
	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == find)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}

/* int main (void)
{
	const char str[] = "bonjour";
	char *score = strrchr(str, 'o');
	printf("Score: %s\n", score);

	char str1[] = "bonjour";
	char *score1 = ft_strrchr(str1, 'o');
	printf("Score: %s\n", score1);
	return 0;fran
} */
