#include <stdio.h>
#include <stdlib.h>


int primo(int n){
	int i=2;

	while (i*i<=n)
			{
				if (n%i==0) return 0;			
				i++;				
			}
		return 1;
}





int main(){
	int numero, x;

	scanf("%d",&numero);
	
	if(numero <0) numero = numero*(-1);
	x = primo(numero);

	if(x == 0) printf("nao\n");
	else printf("sim\n");
	

return 0;
}



