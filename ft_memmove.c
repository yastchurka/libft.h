/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralukasi <ralukasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:36:22 by ralukasi          #+#    #+#             */
/*   Updated: 2022/12/31 16:32:11 by ralukasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	const unsigned char	*source;

	source = str2;
	dest = str1;
	i = -1;
	if (!str1 && !str2 && n > 0)
		return (0);
	if (dest > source)
	{
		while (n > 0)
		{
			n--;
			dest[n] = source[n];
		}
	}
	else
	{
		while (++i < n)
			dest[i] = source[i];
	}
	return (dest);
}

/* int main (void)
{
	char cdest[100] = "dest's adress was not returned\n";
	char csrc[50] = "consectetur";
	char * d = memmove(cdest, csrc, 31);
	printf("PROPER: %s\n", d);
	char cdest1[100] = "ppppppppppppppppp";
	char csrc1[50] = "GeeksforGeeks";
	ft_memmove(cdest1, csrc1, 5);
	printf("Copied string is %s\n", csrc);
	printf("FIX: %s", cdest);
}   */
