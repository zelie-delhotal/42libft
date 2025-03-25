/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:20:31 by gdelhota          #+#    #+#             */
/*   Updated: 2024/11/05 16:29:20 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	while (big[i] && i < len - 1)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len - 1)
			j++;
		if (little[j] == '\0')
			return ((char *) &big[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac > 2)
		printf("%s", ft_strnstr(av[1], av[2], atoi(av[3])));
}*/
