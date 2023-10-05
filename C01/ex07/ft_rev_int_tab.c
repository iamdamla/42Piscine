/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:35:49 by derblang          #+#    #+#             */
/*   Updated: 2022/09/07 09:36:02 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
			swap = tab[i];
			tab[i] = tab[size - 1 - i];
			tab[size - 1 - i] = swap;
			i++;
	}
}

/*int main() 
{
	int tab[] = {1, 2, 3};
	int size = 3;
	ft_rev_int_tab(tab, size);
	printf("%d, %d,  %d", tab[0], tab[1], tab[2]);
	return 0;
}*/
