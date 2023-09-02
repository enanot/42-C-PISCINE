/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:20:05 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/31 16:01:53 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*int main (void)
{
	int ret; 

	ret = ft_fibonacci(1);
	printf("%d", ret);
	return(0);
}*/
