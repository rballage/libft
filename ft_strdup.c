/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:31:55 by rballage          #+#    #+#             */
/*   Updated: 2019/12/12 19:31:56 by rballage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dest;

	dest = NULL;
	if (!(dest = (char*)malloc((ft_strlen(src) + 1) * sizeof(*dest))))
		return (0);
	i = 0;
	while ((dest[i] = src[i]) && src[i] != '\0')
		i++;
	dest[i] = '\0';
	return (dest);
}
