/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralukasi <ralukasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:57:03 by ralukasi          #+#    #+#             */
/*   Updated: 2023/01/10 15:07:26 by ralukasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	p;
	int	a;

	p = 0;
	a = 0;
	while (*s)
	{
		if (*s != c && p == 0)
		{
			p = 1;
			a++;
		}
		else if (*s == c)
			p = 0;
		s++;
	}
	return (a);
}

static int	ft_sizecount(char const *s, char c, int i)
{
	int	d;

	d = 0;
	while (s[i] != c && s[i])
	{
		i++;
		d++;
	}
	return (d);
}

static void	ft_freemem(char **ptr, int f)
{
	while (f > -1)
	{
		free(ptr[f]);
		f--;
	}	
	free(ptr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		a;
	int		f;
	char	**ptr;

	i = 0;
	f = -1;
	a = ft_count_words(s, c);
	ptr = (char **)malloc((a + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (++f < a)
	{
		while (s[i] == c)
			i++;
		ptr[f] = ft_substr(s, i, ft_sizecount(s, c, i));
		if (!ptr[f])
		{
			ft_freemem(ptr, f);
			return (NULL);
		}
		i = ft_sizecount(s, c, i) + i;
	}
	ptr[f] = NULL;
	return (ptr);
}
