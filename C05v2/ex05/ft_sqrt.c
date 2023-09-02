/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:58:12 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/31 21:37:30 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	int	i;

	i = nb;
	if (nb <= 0)
		return (0);
	if ((nb % nb) != 0)
		return (0);
	while (i > 1)
	{
		if ((i * i) == nb)
			return (i);
		i--;
	}
	return (0);
}
/*int main(void)
{
	int ret;

	ret = ft_sqrt(8);
	printf("%d\n",ret);

}*/
