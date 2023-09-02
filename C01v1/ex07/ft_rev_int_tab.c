/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:37:30 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/17 14:52:31 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	c;
	int	aux;

	c = 0;
	index = (size - 1);
	while (c <= (size / 2))
	{
		aux = tab[index];
		tab [index] = tab[c];
		tab [c] = aux;
		index--;
		c++;
	}
}
/*void putarr(int arr[], int size)
{
    for (int i = 0; i < (size -1); i++)
        printf("%d, ", arr[i]);
    printf("%d\n", arr[size - 1]);
}
int		main (void)
{
	int tab[] = {1, 2, 3, 4,5,6,7,8,9,10,11};
	int size;
	
	size = 11;
	printf("Original: ");
	putarr(tab, size);
	ft_rev_int_tab(tab, size);
	printf("Modified: ");
	putarr(tab, size);
}*/
