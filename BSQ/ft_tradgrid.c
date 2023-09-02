/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tradgrid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:07:23 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/30 18:26:31 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_column(char *aux);
int		ft_row(char*aux); 
char	*ft_getchars(char *aux);

void	ft_tradgrid(char **map, int **mapint, char *aux)
{
	int	i;
	int	j;

	i = 1;
	while (i <= ft_row(aux))
	{
		j = 0;
		while (j < ft_column(aux))
		{
			if (map[i][j] == (ft_getchars(aux)[0]))
				mapint[i][j] = 1;
			if (map[i][j] == (ft_getchars(aux)[1]))
				mapint[i][j] = 0;
			j++;
		}
		i++;
	}
}
