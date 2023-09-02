/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_divstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:01:28 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/30 15:38:40 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_row(char *aux);
int	ft_column(char *aux);

void	ft_divstr(char *str, char **strs)
{
	int	i;
	int	j;
	int	y;
	int	k;
	int	actual;

	j = 0;
	i = 0;
	actual = 0;
	k = ft_row(str);
	j = ft_column(str);
	i = 0;
	while (i <= k)
	{
		y = 0;
		while (str[actual] != '\0' && str[actual] != '\n' && strs[i] != 0)
		{
			strs[i][y] = str[actual];
			actual++;
			y++;
		}
		actual++;
		i++;
	}
}
