/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:19:51 by gdelhota          #+#    #+#             */
/*   Updated: 2024/11/06 13:32:22 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*cast;

	if (n == 0)
		return (0);
	cast = (char *) s;
	i = 0;
	while (i < n - 1 && cast[i] != c)
		i++;
	if (cast[i] == c)
		return ((void *) &s[i]);
	return (0);
}

/*#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac > 0)
		printf("%s", (char *) ft_memchr(av[1], av[2][0], ft_atoi(av[3])));
}*/
