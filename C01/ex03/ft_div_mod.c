/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:22:35 by derblang          #+#    #+#             */
/*   Updated: 2022/09/07 09:30:41 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main()
{
	int x;
	int y;
	int div;
	int mod;
	int *ptr1;
	int *ptr2;
	x = 10; 
	y = 2;

	ptr1 = &div;
	ptr2 =&mod;
	ft_div_mod(x, y, ptr1,ptr2);
	printf("Div: %d, Mod: %d", div, mod);
}*/
