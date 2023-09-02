/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:05:40 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/24 17:09:10 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_atoi(char *str)
{
	int	i;
	int	ret;
	int	neg;

	i = 0;
	ret = 0;
	neg = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	while (str [i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = (ret * 10) + (str[i] - 48);
		i++;
	}
	if (neg % 2 == 1)
		ret = ret * -1;
	return (ret);
}
/*int main(void)
{
	char aux[] = "  ---+--+1234ab567";
	int ret;

	ret = ft_atoi (aux);
	printf("numero es %d", ret );
	return(0);
}*/
