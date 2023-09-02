/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:38:35 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/20 18:08:02 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	checkerror(char **argv, int args, int nums[]);

int	main(int args, char **argv)
{
	char	aux;
	int		i;
	int		nums[15];

	aux = 'E';
	if (checkerror(argv, args, nums))
	{
		write (1, &aux, 1);
		return (0);
	}
	i = 0;
	while (i < 15)
	{
		printf("%d ", nums[i]);
		i++;
	}
	return (0);
}
