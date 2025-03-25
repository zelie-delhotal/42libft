/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:20:31 by gdelhota          #+#    #+#             */
/*   Updated: 2024/11/06 13:42:31 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*cast1;
	char	*cast2;

	if (n == 0)
		return (0);
	i = 0;
	cast1 = (char *) s1;
	cast2 = (char *) s2;
	while (i < n - 1 && cast1[i] == cast2[i])
		i++;
	return ((unsigned char) cast1[i] - cast2[i]);
}

/*#include <stdio.h>
#include <string.h>
int	main(int ac, char **av)
{
	if (ac > 3)
	{
		printf("%d", ft_memcmp(av[1], av[2], ft_atoi(av[3])));
		printf("%d", memcmp(av[1], av[2], ft_atoi(av[3])));
	}
}*/
