/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 11:01:17 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/12 15:40:27 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	check(int aux1, int aux2, int x, int y)
{
	if ((aux1 == 1 && aux2 == 1) || (aux1 == x && aux2 == 1)) 
	{
		ft_putchar ('A');
	}
	else if ((aux1 == 1 && aux2 == y) || (aux1 == x && aux2 == y))
	{
		ft_putchar ('C');
	}
	else if ((aux1 == 1 && aux2 != y) || (aux2 == 1 && aux1 != x)
		|| (aux1 != 1 && aux2 == y) || (aux2 != 1 && aux1 == x))
	{
		ft_putchar ('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int		aux1;
	int		aux2;

	aux1 = 1;
	aux2 = 1;
	while (aux2 <= y)
	{
		while (aux1 <= x)
		{
			check (aux1, aux2, x, y);
			aux1 = aux1 + 1;
		}
		ft_putchar('\n');
		aux1 = 1;
		aux2++;
	}
}
