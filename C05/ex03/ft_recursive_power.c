/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:06:35 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/31 16:01:43 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = nb * ft_recursive_power(nb, power - 1);
	return (i);
}
/*int main (void)
{
	int	i;
	int	exp;
	int	ret;
	
	i = 0;
	exp = 0;
	ret = ft_recursive_power(i, exp);
	printf("%d", ret);
	return(0);
}*/
