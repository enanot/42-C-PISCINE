/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:55:00 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/21 16:07:00 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 'A') && (str[c] <= 'Z'))
		{
			str[c] = str[c] + 32;
		}
		c++;
	}
	return (str);
}
/*int main(void)
{
	char str[]="ZZZZ";

	
	ft_strlowcase(str);
	printf("%s, str\n", str);
	return (0);
}*/
