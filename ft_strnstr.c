/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:00:31 by lbatista          #+#    #+#             */
/*   Updated: 2021/08/05 18:00:03 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	tlittle;

	tlittle = ft_strlen(little);
	if (!tlittle)
		return ((char *)big);
	while (*big && tlittle <= len--)
	{
		if (!ft_memcmp(big, little, tlittle))
			return ((char *)big);
		big++;
	}
	return (0);
}
