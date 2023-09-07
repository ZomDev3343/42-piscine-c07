/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:25:50 by truello           #+#    #+#             */
/*   Updated: 2023/09/05 15:43:24 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	if (!*str)
		return (0);
	return (1 + ft_strlen(++str));
}

char	*ft_strdup(char *src)
{
	char	*r;
	int		src_len;

	src_len = ft_strlen(src);
	r = (char *) malloc(src_len + 1);
	r[src_len] = '\0';
	while (--src_len >= 0)
		r[src_len] = src[src_len];
	return (r);
}
/*#include <stdio.h>
int	main(void)
{
	char test[] = "Hello World";
	char *test2 = ft_strdup(test);
	
	printf("%s\n", test2);
	return (0);
}*/
