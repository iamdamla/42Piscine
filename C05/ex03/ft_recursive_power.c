/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 09:41:37 by derblang          #+#    #+#             */
/*   Updated: 2022/09/13 12:59:55 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
		return (nb * ft_recursive_power(nb, (power - 1)));
	return (res);
}
/*int main(void)
{
	printf("%i", ft_recursive_power(2, 4));
}*/
