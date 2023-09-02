/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:19:27 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/19 16:11:35 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 1;
	while (*str != '\0' && i)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			i = 1;
		}
		else
		{
			i = 0;
		}
		str++;
	}
	return (i);
}
/*int main(void)
{
	char str[]="ABC";
	int i;

	i = ft_str_is_uppercase(str);
	printf("%d", i);
	return (0);
}*/
