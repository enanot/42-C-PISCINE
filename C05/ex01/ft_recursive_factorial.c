/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:19:37 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/31 16:00:49 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
/*int main (void)
{
	int ret;
	int i;

	i = 300;
	ret = ft_recursive_factorial(i);
	printf("%d\n", ret);
	return (0);
}*/
