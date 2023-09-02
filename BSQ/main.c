/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:48:58 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/30 18:30:56 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

char	*ft_getchars(char *aux);
int		ft_row(char *aux);
int		ft_column(char *aux);
void	ft_divstr(char *str, char **strs);
char	*ft_read(char *filename);
void	ft_tradgrid(char **map, int **mapint, char *aux, char *inf);
int		**ft_solve(int **mapint, char *aux, int *ans);
char	**ft_fill(char **map, int *ans, char sqr);
void	ft_printmap(char **map, char *aux);
int		ft_checkmap(char *aux);
int		ft_checkchar(char *aux);
int		ft_checknums(char *aux);
int		ft_checksome(char *aux);
int		ft_checkmiss(char *aux);

char	**ft_charsmemory(char *aux)
{
	int		i;
	int		j;
	int		k;
	char	**map;

	i = 0;
	k = ft_row(aux);
	j = ft_column(aux);
	map = (char **) malloc (k * sizeof (char *) + 1);
	if (map == NULL)
		return (NULL);
	while (i <= k)
	{
		map[i] = (char *)malloc(j * sizeof(char));
		i++;
	}
	return (map);
}

int	**ft_intsmemory(char *aux)
{
	int		i;
	int		j;
	int		k;
	int		**mapint;

	i = 0;
	k = ft_row(aux);
	j = ft_column(aux);
	mapint = (int **) malloc (k * sizeof(int *) + 1);
	if (mapint == NULL)
		return (NULL);
	while (i <= k)
	{
		mapint[i] = (int *)malloc(j * sizeof(int));
		i++;
	}
	return (mapint);
}

void	ft_freeall(char *aux, char **map, int **mapint)
{
	int	i;
	int	j;
	int	k;

	k = ft_row(aux);
	j = ft_column(aux);
	i = 0;
	free (aux);
	while (i <= k)
	{
		free (map[i]);
		free (mapint[i]);
		i++;
	}
	free (map);
	free(mapint);
}

void	ft_exft(char *aux)
{
	char	**map;
	int		**mapint;
	int		ans[3];

	if ((ft_checkmap(aux) && (ft_checkchar(aux)) && ft_checknums(aux)
			&& (ft_checksome(aux)) && (ft_checkmiss(aux))) > 0)
	{
		map = ft_charsmemory(aux);
		mapint = ft_intsmemory(aux);
		ft_divstr(aux, map);
		ft_tradgrid(map, mapint, aux, ft_getchars(aux));
		mapint = ft_solve(mapint, aux, ans);
		if (!(ans[2] == 0))
			ft_fill(map, ans, (ft_getchars(aux)[2]));
		ft_printmap(map, aux);
	}
	else
		write(1, "map error\n", 10);
}

int	main(int argc, char **argv)
{
	char	*aux;
	char	**map;
	int		**mapint;
	int		i;
	char	buff[80];

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			aux = ft_read(argv[i]);
			ft_exft(aux);
			i++;
			if (i > 1 && i < argc)
				write(1, "\n", 1);
		}
	}
	else if (argc == 1)
	{
		read(0, buff, 80);
		write(1, "We've read from the stdinput!!", 30);
	}
}
