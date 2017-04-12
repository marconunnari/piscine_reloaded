/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnunnari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 21:41:18 by mnunnari          #+#    #+#             */
/*   Updated: 2017/04/12 21:41:35 by mnunnari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*res;
	int		len;
	int		i;

	if (min >= max)
		return (NULL);
	len = max - min;
	res = (int*)malloc(sizeof(int) * len);
	i = min;
	while (i < max)
	{
		res[i - min] = i;
		i++;
	}
	return (res);
}
