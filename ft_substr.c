/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralukasi <ralukasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 22:45:34 by ralukasi          #+#    #+#             */
/*   Updated: 2022/12/31 12:53:36 by ralukasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (start >= (unsigned int)ft_strlen(s))
	{
		ptr = ft_calloc(sizeof(char), 1);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (ft_strlen(s) - start < len)
		ptr = ft_calloc(sizeof(char), ((unsigned int)ft_strlen(s) - start + 1));
	else
		ptr = ft_calloc(sizeof(char), ((unsigned int)len + 1));
	if (ptr == NULL)
		return (NULL);
	if (len > ft_strlen(s) - start)
		ft_strlcpy(ptr, s + start, ft_strlen(s) - start + 1);
	else
		ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}
/* 
int main()
{
	char str[] = "hola";
	unsigned int start = 4294967295;
	size_t len = 1844674407370955161;
	char * substr = ft_substr(str, start, len);
	//printf("%s\n", substr);
	free(substr);
}     */