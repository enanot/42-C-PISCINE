/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 13:52:17 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/11 14:15:13 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include <unistd.h>

void 	ft_print_comb2(void)
{

	char a1;
	char a2;
	char b1;
	char b2;

	a1 = '0';
	a2 = '0';
	b1 = '0';
	b2 = '1';

			
//	while ()

		while (b2 <'9')
		{
			write (1, &a1, 1);
			write (1, &a2, 1);
			write (1,, ,2);
			write (1, &b1, 1);
			write (1, &b2, 1);
			b2 = b2 + '1';
		}

}
