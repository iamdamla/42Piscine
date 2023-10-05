/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:36:13 by derblang          #+#    #+#             */
/*   Updated: 2022/09/07 09:36:21 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{	
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i +1])
			{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
/*int main()
{
	int tab[] = {3, 8 , 7};
	int size = 3;
	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d", tab[0], tab[1], tab[2]);
	return 0;
}*/
