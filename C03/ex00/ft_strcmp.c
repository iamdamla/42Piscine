/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:51:22 by derblang          #+#    #+#             */
/*   Updated: 2022/09/12 08:47:06 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
		i++;
	}
	return (0);
}
/*int main(void){
 char *str1;
 char *str2;
str1="Helloa";
str2="Hellob";
 
printf("%d\n", ft_strcmp(str1, str2));
printf("%d\n", strcmp(str1, str2));
 return 0;
}*/
