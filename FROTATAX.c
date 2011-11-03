#include <stdio.h>
#include <stdlib.h>



int main(){

	float  a, g, ra,rg;
	char resultado;

	scanf("%f%f%f%f",&a,&g,&ra,&rg);

	if( a/ra < g/rg) resultado = 'A';
	else resultado = 'G';

	printf("%c\n", resultado);



return 0;
}
