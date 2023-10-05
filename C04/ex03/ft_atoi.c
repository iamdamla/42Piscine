/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 09:08:51 by derblang          #+#    #+#             */
/*   Updated: 2022/09/14 14:31:13 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	while ((str[i] && (str[i] >= 9 && str[i] <= 13)) || str[i] == 32)
		i++;
	while ((str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
/*#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char *str1, *str2, *str3;
	str1 = "abc123" ;
	str2 = "  ---+--+1234ab567";
	str3 = "123abc";

	printf("%d\n", ft_atoi(str3));
	printf("%d\n", atoi(str3));		
}*/
