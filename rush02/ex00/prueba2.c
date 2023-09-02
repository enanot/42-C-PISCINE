#include <stdlib.h>
#include <stdio.h>

char**	divstr(char *str, char sep )
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
		if(str[i] == sep)
			j++;
		i++;
	}
	j++;	
	strs = (char**)malloc(j*sizeof(char*));
		if (strs == 0)
		   return (strs);
	i = 0;
	while(i < j)
	{
		l =  0;
		while(str[k]!= sep && str[k] != '\0')
		{
			k++;
			l++;
		}
		strs[i] = (char*)malloc(l*sizeof(char));

		y = 0;
		while (str[actual] != sep && str[actual] != '\0')
		{

			strs[i][y] = str[actual];
			actual++;
			y++;
		}
		actual++;
		i++;
		k++;
	}
	return (strs);
}

int main (void)
{
	char** strs;
	char sep;
	char aux[]= "20:uno\n30:dos\n40:cuatro\n33:33";
	sep =']';
	strs = divstr(aux, 10);

	printf("%c\n",divstr(strs[2], ':')[0][0]);

	//printf("%s\n", strs[1]);
	//printf("%s\n", strs[2]);
	return (0);
`


}
