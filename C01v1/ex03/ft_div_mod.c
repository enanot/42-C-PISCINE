/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:53:42 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/16 12:32:05 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/* int main(void){
	
	int a = 10;
	int b = 5;
	int div;
	int mod;

	ft_div_mod (a,b,&div,&mod);
	printf ("div es %d, y mod es %d", div, mod);
	return (0);

}*/
