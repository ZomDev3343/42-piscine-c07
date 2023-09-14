/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:43:43 by truello           #+#    #+#             */
/*   Updated: 2023/09/13 10:35:30 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*r;
	int	len;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	len = max - min;
	r = (int *) malloc(sizeof(int) * len);
	while (i < len)
	{
		r[i] = min++;
		i++;
	}
	return (r);
}
