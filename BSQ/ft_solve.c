/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:29:33 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/30 18:31:13 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_row(char *aux);
int	ft_column(char *aux);

int	*ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < (size - 1 - i))
		{
			if (tab[j + 1] < tab[j])
			{
				aux = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = aux;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

int	ft_checkcells(int **mapint, int i, int j)
{
	int	cells[3];
	int	*minvalue;

	if (mapint[i][j] == 0)
	{
		return (0);
	}
	else
	{
		cells[0] = mapint[i - 1][j];
		cells[1] = mapint[i - 1][j - 1];
		cells[2] = mapint[i][j - 1];
		minvalue = ft_sort_int_tab(cells, 3);
		return (minvalue[0] + 1);
	}
}

void	ft_setans(int *ans, int i, int j, int k)
{
	ans[0] = i;
	ans[1] = j;
	ans[2] = k;
}

int	**ft_solve(int **mapint, char *aux, int *ans)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 1;
	while (i <= ft_row(aux))
	{
		j = 0;
		while (j < ft_column(aux))
		{
			mapint[i][j] = ft_checkcells(mapint, i, j);
			if (mapint[i][j] > k)
			{
				k = ft_checkcells(mapint, i, j);
				ft_setans(ans, i, j, k);
			}
			j++;
		}
		i++;
	}
	if (k == 0)
		ft_setans(ans, 0, 0, 0);
	return (mapint);
}
