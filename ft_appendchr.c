/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_appendchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 14:34:38 by lbatista          #+#    #+#             */
/*   Updated: 2021/09/24 14:58:52 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_appendchr(char const *s, char const c)
{
	char	*ccat;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	ccat = (char *)malloc((len + 2) * sizeof(char));
	if (!ccat)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ccat[i] = s[i];
		i++;
	}
	ccat[i++] = c;
	ccat[i] = '\0';
	return (ccat);
