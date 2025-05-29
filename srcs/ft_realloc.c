/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 04:13:26 by gdelhota          #+#    #+#             */
/*   Updated: 2025/05/15 04:32:14 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	size_t	old_size;
	void	*res;

	old_size = sizeof(ptr);
	res = malloc(size);
	ft_memcpy(res, ptr, old_size);
	free(ptr);
	return (res);
}
