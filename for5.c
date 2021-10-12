
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,y,z,cont,stop;

	x=1;
	y=0;
	z=1;

	printf("Cuantos numeros deseas: ");
	scanf("%d,", &stop);
		
    
	for(cont=0;cont<stop;cont++)
	{
	  z=x+y;
	  printf("%d\n",z);
	  x=y;
	  y=z; 
    } 	 

getchar();
return 0;
}
