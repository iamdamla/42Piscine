/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:40:54 by derblang          #+#    #+#             */
/*   Updated: 2022/09/18 14:58:12 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	j = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (size < 1)
		return (slen + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < dlen)
		return (slen + size);
	else
		return (dlen + slen);
}
int main()
{
	char src[50] = " World!!!";
 char dest[50] = "Hello";

 unsigned int size;
 size = 0;
printf("%i \n", ft_strlcat(dest, src, size));
printf("dest: %s\n src: %s\n", dest, src);
printf("%lu \n", strlcat(dest, src, size));
}
