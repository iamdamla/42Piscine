/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:54:13 by derblang          #+#    #+#             */
/*   Updated: 2022/09/07 12:59:31 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	next;

	i = 0;
	next = 1;
	ft_lowercase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (next == 1)
				str[i] -= 32;
				next = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
				next = 0;
		else
			next = 1;
		i++;
	}
	return (str);
}
/*int main(){
	char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char s1[] = "diujndfvon,odficj,dc dsfovij?kl43lo+dd-sdk%cdj*dc$sdc";
	printf("%s", ft_strcapitalize(s));
	printf("\n%s", ft_strcapitalize(s1));
}*/
