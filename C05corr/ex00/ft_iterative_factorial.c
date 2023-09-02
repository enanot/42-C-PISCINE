/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:50:29 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/31 16:01:08 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	j;

	j = nb;
	i = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		j = j * (nb - 1);
		nb--;
	}
	return (j);
}
/*int main (void)
{
	int i;
	int ret;

	i = 0;
	ret = ft_iterative_factorial(i);
	printf("%d\n", ret);
	return(0);
}*/
