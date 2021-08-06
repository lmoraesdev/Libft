/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:59:51 by lbatista          #+#    #+#             */
/*   Updated: 2021/08/05 17:59:04 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	resd;
	size_t	ress;

	i = ft_strlen(dst);
	j = 0;
	resd = ft_strlen(dst);
	ress = ft_strlen(src);
	if (size < 1)
		return (ress + size);
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (size < resd)
		return (ress + size);
	return (resd + ress);
}
