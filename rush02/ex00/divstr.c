/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:51:37 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/26 17:23:05 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char**	divstr(char *str )
{
	int i;
	int j;
	int k;
	int l;
	int y;
	int actual;
	char ** strs;

	k = 0;
	j = 0;
	i = 0;
	actual = 0;
	while(str[i] != '\0')
	{
		if(str[i] == '\n')
			j++;
		i++;
	}
	strs = (char**)malloc(j*sizeof (char));
	i = 0;
	while(i < j)
	{
		l =  0;
		while(str[k]!= '\n')
		{
			k++;
			l++;
		}
		strs[i] = (char*)malloc(l*sizeof(char));
		y = 0;
		while (str[actual] != '\n')
		{
			strs[i][y] = str[actual];
			actual++;
			y++;
		}
		actual++;
		i++;
		k++;
	}
	return strs;
}

int main (void)
{
	char** strs;

	char aux[]= "hola\nmundo\npepe\n";

	strs = divstr(aux);

	printf("%s\n",strs[0]);

	printf("%s\n", strs[1]);
	printf("%s\n", strs[2]);

	free(strs);
	return (0);



}
