/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:49:37 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/16 12:51:02 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	j = 1;
	i = 0;
	while (j)
	{
		j = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				aux = tab[i];
				tab[i] = tab[i + 1];
				tab [i + 1] = aux;
				j++;
			}
			i++;
		}
	}
}
/*int main(void)
{
	int arr[10] = {15,2,36,95,115,99,41,255,11,25};
	int size =10;
	int i = 0;

	int  *tab = arr;
	ft_sort_int_tab(tab, size);
	
	while (i < size){
		
		printf("%d\n",arr[i]);
		 i++;



	}



}*/
