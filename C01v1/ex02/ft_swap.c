/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:35:10 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/16 12:24:30 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h>*/
void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
/*int main (void){

	int a =10;
   	int b = 1;
	
	ft_swap(&a,&b);	
	
	printf("a es %d, y b es %d \n", a,b );
	return (0);


}*/
