/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:07:31 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/19 16:10:02 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 1;
	while (*str != '\0' && i)
	{
		if (*str >= 'a' && *str <= 'z')
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

	i = ft_str_is_lowercase(str);
	printf("%d", i);
	return (0);
}*/
