/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:43:49 by derblang          #+#    #+#             */
/*   Updated: 2022/09/22 08:47:23 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i] != '\0')
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_final_length(int size, char **strs, int sep_len)
{
	int	i;
	int	len;

	len = 0;
	len = sep_len * -1;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]) + sep_len;
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	char	*res;

	if (size == 0)
		return ((char *)(malloc(0)));
	total_len = ft_final_length(size, strs, ft_strlen(sep));
	res = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!res)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		res += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcat(res, sep);
			res += ft_strlen(sep);
		}
	i++;
	}
	*res = '\0';
	return (res - total_len);
}
/*#include <stdio.h>
int main()
{
	int size;
	char **strs; 
	char *new_string;
	char *seperator = "@@";
	size = 3;
	strs = malloc(3 * sizeof(char *));
	strs[0] = malloc(sizeof(char) * 5);
	strs[1] = malloc(sizeof(char) * 7);
	strs[2] = malloc(sizeof(char) * 14);
	ft_strcat(strs[0], "Hello");
	ft_strcat(strs[1], "friend");
	ft_strcat(strs[2], "how are you");

	new_string = ft_strjoin(size, strs, seperator);
	printf("%s\n", new_string);
	return 0;
}*/
