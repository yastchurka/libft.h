/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralukasi <ralukasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 14:45:16 by ralukasi          #+#    #+#             */
/*   Updated: 2023/01/10 15:10:20 by ralukasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*ptr;

	start = 0;
	while (s1[start] && (is_in_set(s1[start], set) == 1))
		start++;
	end = ft_strlen(s1);
	while (end > start && (is_in_set(s1[end - 1], set) == 1))
		end--;
	ptr = (char *)malloc(sizeof(*s1) * ((end - start) + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (start < end)
		ptr[i++] = s1[start++];
	ptr[i] = 0;
	return (ptr);
}
/* 
#include <stdio.h>

int main()
{
    char s1[] = "aaaaaabbb chujmniestrzela";
    char const s2[] = "";
	char * fuck = ft_strtrim(s1, s2);
	printf("%s\n", fuck);
	free(fuck);
	return 0;
} */