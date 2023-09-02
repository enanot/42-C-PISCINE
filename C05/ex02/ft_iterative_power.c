/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:29:38 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/31 16:01:27 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power >= 1)
	{
		i = i * nb;
		power--;
	}
	return (i);
}
/*int main (void)
{
	int i;
	int exp;
	int ret;
	
	i = 2;
	exp = 5;

	ret = ft_iterative_power(i,exp);

	printf("%d\n",ret);


}*/
