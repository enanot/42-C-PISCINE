/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:59:40 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/21 16:17:04 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
char	*ft_strcapitalize(char *str)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (str[c] != '\0')
	{
		if (i == 0 && (str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] -= 'a' - 'A';
			i++;
		}
		else if (i > 0 && (str[c] >= 'A' && str[c] <= 'Z'))
		{
			str[c] += 'a' - 'A';
		}
		else if ((str[c] < '0') || (str[c] > '9' && str[c] < 'A')
			|| (str[c] > 'Z' && str[c] < 'a') || (str[c] > 'z'))
			i = 0;
		else
			i++;
		c++;
	}
	return (str);
}
/*int main(void)
{
	char str[]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	
	ft_strcapitalize(str);
	printf("%s, str\n", str);
	return (0);
}*/
