#include <unistd.h>


# include <unistd.h>

void 	ft_print_comb2(void)
{

	char a1;
	char a2;
	char b1;
	char b2;
	char esp;
	char com;

	
	a1 = '0';
	a2 = '0';
	b1 = '0';
	b2 = '1';
	esp = ' ';
	com = ',';
	
	while (a2 <='9'){

		while (b1 <= '9' ){


			while (b2 <='9')
			{ 
				if (b2 == a2 && a1 == b1){
				
				}else{
				write (1, &a1, 1);
    	       			write (1, &a2, 1);
        			write (1,&esp,1);
          			write (1, &b1, 1);
           			write (1, &b2, 1);
           			write (1,&com,1);			
				}
  
				b2 = b2 + 1;
			}

			b2 = '0';
			b1 = b1 +1;
		}
	
		b2 = '0';
		b1 = '0';
		a2 = a2 + 1;
	}

}




	int main (void){
		

		ft_print_comb2();
		return (0);
	}
