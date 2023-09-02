/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enanot-m <enanot-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:51:37 by enanot-m          #+#    #+#             */
/*   Updated: 2023/08/26 16:43:33 by enanot-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char**	divstr(char *str )
{
	int i;
/*	int j; index[0]
	int k; index[1]
	int l;
	int y;
	int actual;*/
	int indexs[5];

	char ** strs;
	i =0;
	while (i++ <5)
		index[i] = 0;
/*	k = 0;
	j = 0;
	i = 0;
	actual = 0;*/
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == '\n')
			indexs[0];
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
		while (str[actual])
		{
			strs[i][y] = str[actual];
			actual++;
			y++;
		}
		i++;
		k++;
	}
	return strs;
}

int main (void)
{
	char** strs;

	char aux[]= "hola\nmundo";

	strs = divstr(aux);

	printf("%s\n",strs[0]);

	printf("%s\n", strs[1]);
	return (0);



}
