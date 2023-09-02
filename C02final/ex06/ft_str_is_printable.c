/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:25:21 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/23 12:22:27 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 32) || (str[c] > 126))
		{
			return (0);
		}
		c++;
	}
	return (1);
}
/*int main(void)
{
	char str[]="abc";
	int i;

	i = ft_str_is_printable(str);
	printf("%d", i);
	return (0);
}*/
