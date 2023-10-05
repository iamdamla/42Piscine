/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:35:22 by derblang          #+#    #+#             */
/*   Updated: 2022/09/13 16:44:09 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	num;

	num = 1;
	if (nb == 0)
		return (0);
	while ((num * num) < nb && num <= 46340)
		num++;
	if (nb == num * num)
		return (num);
	else
		return (0);
}
/*int main()
{
	printf("%d", ft_sqrt(16));
}*/
