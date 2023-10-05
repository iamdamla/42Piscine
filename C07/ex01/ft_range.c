/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:05:07 by derblang          #+#    #+#             */
/*   Updated: 2022/09/15 12:56:13 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (0);
	range = malloc((max - min) * sizeof(int));
	if (range == 0)
		return (0);
		i = 0;
	while (i < (max - min))
	{
		range[i] = min + i;
			i++;
	}
	return (range);
}
/*#include <stdio.h>

   int main(void)
{
	int i = 0;
	int *range;
	range = ft_range(0, 20);
	while(i < 20)
	{
		printf("%d ", range[i]);
		i++;
	}	
}*/
