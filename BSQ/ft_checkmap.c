/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:29:39 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/30 18:25:31 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_row(char *aux);
char	*ft_getchars(char *aux);

int	ft_checkmap(char *aux)
{
	int	i;
	int	j;
	int	k;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (aux[i])
	{
		if (aux[i] == '\n')
		{
			count++;
			if (count > 2 && k != j)
				return (0);
			k = j;
			j = 0;
		}
		i++;
		j++;
	}
	return (1);
}

int	ft_checkchar(char *aux)
{
	aux = ft_getchars(aux);
	if ((aux[0] == aux[1] || aux[0] == aux[2] || aux[2] == aux[3]))
	{
		return (0);
	}
	else
		return (1);
}

int	ft_checknums(char *aux)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	i = 0;
	k = -1;
	while (aux[i] >= '0' && aux[i] <= '9')
	{
		j = (j * 10) + aux[i] - 48;
		i++;
	}
	i = 0;
	while (aux[i])
	{
		if (aux[i] == '\n')
			k++;
		i++;
	}
	if (j != k)
		return (0);
	return (1);
}

int	ft_checksome(char *aux)
{
	int		i;
	char	par[3];

	i = 0;
	par[0] = (ft_getchars(aux)[0]);
	par[1] = (ft_getchars(aux)[1]);
	while (aux[i] != '\n')
		i++;
	i++;
	while (aux[i])
	{
		if (!(aux [i] == par[0] || aux[i] == par [1] || aux[i] == '\n'))
			return (0);
		i++;
	}
	return (1);
}

int	ft_checkmiss(char *aux)
{
	int		i;
	char	*par;

	i = 0;
	par = ft_getchars(aux);
	while (i < 2)
	{
		if (par[i] >= '0' && par[i] <= '9')
			return (0);
		i++;
	}
	return (1);
}
