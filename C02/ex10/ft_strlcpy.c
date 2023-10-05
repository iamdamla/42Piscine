/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:41:40 by derblang          #+#    #+#             */
/*   Updated: 2022/09/19 11:55:47 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	res;

	res = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
		dest[i] = src[i];
		i++;
		}
		dest[i] = '\0';
	}
	return (res);
}
/*int main(void)
{
	char dest[50];
	char src[] = "bonjour";
	int size = 20;
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf(".%s.\n", dest);
	printf("%lu\n", strlcpy(dest, src, size));
	printf(".%s.\n", dest);
}*/
