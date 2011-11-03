#include <stdio.h>
#include <stdlib.h>

int f91(int n){
	
	if(n<= 100){
		return f91(f91(n + 11));
	}
	else{	

		return n-10;
	
	}
}


int main(){

	int numero=1,x;

	while(numero != 0){
		
		scanf("%d", &numero);
		if(numero !=0){
			x = f91(numero);
			printf("f91(%d) = %d\n",numero, x);
		}
		else return 0;
		
	}

}


