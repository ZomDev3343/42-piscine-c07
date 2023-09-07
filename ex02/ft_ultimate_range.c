/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:52:03 by truello           #+#    #+#             */
/*   Updated: 2023/09/05 16:25:23 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	if (!(range))
		return (-1);
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
/*#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int	min = atoi(argv[1]);
		int max = atoi(argv[2]);
		int	*tab;
		int	tab_len = ft_ultimate_range(&tab, min, max);
		for (int i = 0; i < (max - min); i++)
		{
			printf("Tab[%d] : %d\n", i, tab[i]);
		}
		free(tab);
		printf("Tab Length : %d\n", tab_len);
	}
	return (0);
}*/
