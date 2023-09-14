/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:52:03 by truello           #+#    #+#             */
/*   Updated: 2023/09/13 10:36:38 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = -1;
	len = max - min;
	*range = (int *) malloc(sizeof(int) * len);
	if (!(*range))
		return (-1);
	while (++i < len)
		(*range)[i] = min++;
	return (len);
}
