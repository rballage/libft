/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rballage <rballage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:28:41 by rballage          #+#    #+#             */
/*   Updated: 2020/01/08 13:27:35 by rballage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strnew(size_t size)
{
	char *str;

	str = NULL;
	if (!(str = (char *)malloc((sizeof(char) * size) + 1)))
		return (NULL);
	while (size)
		str[size--] = '\0';
	return (str);
}

static size_t	get_len(long nb)
{
	size_t		i;

	i = 1;
	while (nb /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	long		nb;

	nb = n;
	len = get_len(nb);
	if (n < 0)
	{
		nb = nb - nb - nb;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = nb % 10 + '0';
	while (nb /= 10)
		str[--len] = nb % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
