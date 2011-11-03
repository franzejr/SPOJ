#include <stdio.h>
#include <stdlib.h>


int main(){

	int x1,x2, y1,y2;
	
	while(1) {
		
		scanf("%d%d%d%d",&x1,&y1,&x2, &y2);
		
		if(x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0) break;
		
		else if( x1 == x2 &&  y1 == y2) printf("%d\n", 0); // Quando está na mesma linha
		else if( x1 == x2 || y1 == y2) printf("%d\n", 1); //Vê se tem o mesmo x ou mesmo y
		else if(x1 + y2 == y1 + x2) printf("%d\n", 1); //Verifica diagonal primária
		else if(x1 + y1 == x2 + y2) printf("%d\n",1); // Verifica diagonal secundária
		else printf("%d\n", 2);  
	
		
		
	}


return 0;
}
