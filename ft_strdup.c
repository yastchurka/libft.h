/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralukasi <ralukasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:54:10 by ralukasi          #+#    #+#             */
/*   Updated: 2022/12/13 19:13:55 by ralukasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	i;
	unsigned int	length;
	char			*memory;

	i = 0;
	length = 0;
	while (s[length] != '\0')
		length++;
	memory = (char *) malloc(sizeof (char) * length + 1);
	if (memory == NULL)
		return (NULL);
	while (i < length)
	{
		memory[i] = s[i];
		i++;
	}
	memory[i] = '\0';
	return ((char *)memory);
}

// #include <string.h>
// #include <stdio.h>
// int main (void) 
// {
//     char s[] = "Awkward machine you are.";
//     printf("%s", ft_strdup(s));
//     return 0;
// }
