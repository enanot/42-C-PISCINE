/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:22:42 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/30 09:39:32 by dventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_fill( char **map, int *ans, char sqr)
{
	int	i;
	int	j;
	int	k;
	int	l;

	k = 0;
	i = ans[0] + 1;
	while (k <= ans[2])
	{
		j = ans[1];
		while (l < ans[2])
		{
			map[i][j] = sqr;
			j--;
			l++;
		}
		i--;
		l = 0;
		k++;
	}
	return (map);
}
