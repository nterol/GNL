/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nterol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 13:02:29 by nterol            #+#    #+#             */
/*   Updated: 2016/11/15 15:49:29 by nterol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	new = (char *)malloc(sizeof(char) * (j + 1));
	if (new != NULL)
	{
		while (i < j)
		{
			new[i] = src[i];
			i++;
		}
	}
	else
		return (0);
	new[j] = '\0';
	return (new);
}
