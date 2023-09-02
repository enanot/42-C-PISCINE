/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:19:08 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/19 16:06:06 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 1;
	while (*str != '\0' && i)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
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

	i = ft_str_is_alpha(str);
	printf("%d", i);
	return (0);
}*/
