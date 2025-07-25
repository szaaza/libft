/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazanjan <sazanjan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:08:51 by sazanjan          #+#    #+#             */
/*   Updated: 2025/07/21 16:35:21 by sazanjan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	size_t	i;
	char	*dstc;
	char	*srcc;

	if (destination == NULL && source == NULL)
		return (NULL);
	i = 0;
	dstc = (char *)destination;
	srcc = (char *)source;
	while (i < num)
	{
		dstc[i] = srcc[i];
		i++;
	}
	return (destination);
}
