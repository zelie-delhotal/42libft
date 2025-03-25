/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:03:06 by gdelhota          #+#    #+#             */
/*   Updated: 2024/11/06 17:08:00 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d_cast;
	char	*s_cast;
	size_t	i;

	d_cast = (char *) dest;
	s_cast = (char *) src;
	i = -1;
	if (s_cast < d_cast)
	{
		while (++i < n)
			d_cast[n - i - 1] = s_cast[n - i - 1];
	}
	else
	{
		while (++i < n)
			d_cast[i] = s_cast[i];
	}
	return (dest);
}
