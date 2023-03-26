/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralukasi <ralukasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:27:29 by ralukasi          #+#    #+#             */
/*   Updated: 2022/12/22 18:17:07 by ralukasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;

	ptr = (void *)malloc(nmemb * size);
	i = 0;
	if (!(ptr))
		return (0);
	ft_bzero(ptr, nmemb * size);
	return ((void *)ptr);
}
