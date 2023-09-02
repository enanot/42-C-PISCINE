/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:59:33 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/19 16:07:27 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 1;
	while (*str != '\0' && i)
	{
		if (*str >= '0' && *str <= '9')
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
	char str[]="";
	int i;

	i = ft_str_is_numeric(str);
	printf("%d", i);
	return (0);
}*/
