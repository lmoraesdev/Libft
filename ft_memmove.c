/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:58:10 by lbatista          #+#    #+#             */
/*   Updated: 2021/08/11 21:05:00 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*tdest;
	const unsigned char	*tsrc;

	tdest = (unsigned char *)dest;
	tsrc = (unsigned char *)src;
	i = 0;
	if ((!src && !dest) || !n)
		return (dest);
	if (tsrc < tdest)
		while (++i <= n)
			tdest[n - i] = tsrc[n - i];
	else
		while (n--)
			*(tdest++) = *(tsrc++);
	return (dest);
}
