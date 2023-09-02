/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:54:51 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/30 16:46:45 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_row(char *aux)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (aux[i] != '\0')
	{
		if (aux[i] == '\n')
			count++;
		i++;
	}
	return (count - 1);
}

int	ft_column(char *aux)
{
	int	i;
	int	count;
	int	j;

	j = 0;
	i = 0;
	count = 0;
	while (count < 2)
	{
		if (count == 0)
			j++;
		if (aux[i] == '\n')
			count++;
		i++;
	}
	return (i - j - 1);
}
