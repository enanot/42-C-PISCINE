/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getchars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:44:20 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/29 21:12:38 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_getchars(char *aux)
{
	char	inf[3];
	int		i;
	char	*ret;

	i = 0;
	while (aux[i] != '\n')
		i++;
	inf[0] = aux[i - 3];
	inf[1] = aux[i - 2];
	inf[2] = aux[i - 1];
	ret = inf;
	return (ret);
}
