/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:42:18 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/21 16:04:33 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 'a') && (str[c] <= 'z'))
		{
			str[c] = str[c] - 32;
		}
		c++;
	}
	return (str);
}
/*int main(void)
{
	char str[]="abvdfbne22";

	
	ft_strupcase(str);
	printf("%s, str\n", str);
	return (0);
}*/
