/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralukasi <ralukasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:58:15 by ralukasi          #+#    #+#             */
/*   Updated: 2022/12/16 17:03:53 by ralukasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t		i;
	const char	*s;

	s = str;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char) c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == '\0' && (unsigned char) c == '\0')
		return ((char *)&s[i]);
	return (0);
}

/* int main (void) 
{
	const char str[] = "This is my destination.";
	char *score = strchr(str, ' ');
	printf("Score: %s\n", score);

	char str1[] = "This is my destination.";
	char *score1 = ft_strchr(str1, ' ');
	printf("Score: %s\n", score1);
	return 0;
} */
