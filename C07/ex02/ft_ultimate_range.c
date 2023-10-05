/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:42:45 by derblang          #+#    #+#             */
/*   Updated: 2022/09/15 12:57:07 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
		return (0);
	*range = malloc((max - min) * sizeof(int));
	if (*range == 0)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}
/*#include <stdio.h>
int main()
{
	int *range;
	int i;

	i = ft_ultimate_range(&range, 0, 20);
	printf("%d\n", i);
	while (i > 0)
	{
		printf("%d ", *range);
		range++;
		i--;
	}
}*/
