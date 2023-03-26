/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralukasi <ralukasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:01:44 by ralukasi          #+#    #+#             */
/*   Updated: 2022/12/16 18:15:10 by ralukasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*first;
	unsigned char	*second;

	first = (unsigned char *) s1;
	second = (unsigned char *) s2;
	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		i++;
	return (first[i] - second[i]);
}

/*
#include <stdio.h>
#include <string.h>
int main ()
{
  char s1[] ="R2Dz";
  char s2[] = "R2D2";
  int n;
  puts ("Looking for R2 astromech droids...");
	if (ft_strncmp (s1, s2, 1) == 0)
    {
      printf ("found %s\n, %s\n", s1, s2);
    }
	else
		printf ("Found nothing.");
  return 0;
}
*/
