/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:59:14 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/30 15:32:07 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_row(char *aux);
int	ft_column(char *aux);

void	ft_printmap(char **map, char *aux)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= ft_row(aux))
	{
		while (j <= ft_column(aux))
		{
			write(1, &map[i][j], 1);
			j++;
		}
		j = 0;
		write(1, "\n", 1);
		i++;
	}
}
