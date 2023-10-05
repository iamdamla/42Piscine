/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:32:04 by derblang          #+#    #+#             */
/*   Updated: 2022/09/10 11:59:20 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*int main()
{
	char *str1;
	char *str2;
	int size;
	str1 = "Hello";
	str2 = "Hellooo";
	size = 10;
	printf("%d\n", ft_strncmp(str1, str2, size));
	printf("%d\n", strncmp(str1, str2, size));

			}*/
