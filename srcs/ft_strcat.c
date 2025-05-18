/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 00:40:29 by gdelhota          #+#    #+#             */
/*   Updated: 2025/05/18 05:51:27 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, char *s2, char *separator)
{
	char	*res;
	int		i;
	int		j;

	res = malloc(ft_strlen(s1) + ft_strlen(s2) + ft_strlen(separator) + 1);
	if (res == NULL)
		return (NULL);
	i = -1;
	while (s1[++i])
		res[i] = s1[i];
	j = i;
	while (separator[i - j])
	{
		res[i] = separator[i - j];
		i++;
	}
	j = i;
	while (s2[i - j])
	{
		res[i] = s2[i - j];
		i++;
	}
	res[i] = 0;
	return (res);
}
