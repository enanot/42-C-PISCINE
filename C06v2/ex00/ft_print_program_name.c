/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:04:06 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/31 21:42:10 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char	**argv)
{
	int	i;

	i = 0;
	argc = 1;
	while (argv[0][i])
	{
		write (1, &argv[0][i], 1);
		i++;
	}
	return (0);
}
