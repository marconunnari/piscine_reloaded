/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 21:39:36 by mnunnari          #+#    #+#             */
/*   Updated: 2017/04/12 21:40:55 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *s)
{
	int			len;
	char		*dup;
	int			i;

	len = ft_strlen(s);
	dup = (char*)malloc(len + 1);
	i = 0;
	if (!dup)
		return (NULL);
	else
	{
		i = 0;
		while (s[i])
		{
			dup[i] = s[i];
			i++;
		}
		dup[i] = '\0';
	}
	return (dup);
}
