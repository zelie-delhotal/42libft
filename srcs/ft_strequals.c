/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequals.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 18:19:14 by gdelhota          #+#    #+#             */
/*   Updated: 2025/05/08 18:27:41 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequals(char *s1, char *s2)
{
	int	i;

	if (s1 == NULL || s2 == NULL)
		return (s1 == s2);
	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
