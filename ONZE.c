#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	  
	  
	int main(){
	char numero[1001];
	char temp[2];
	  
	int i, s, tam,k=0;
	 
	temp[1] ='\0';

		while(1){
		 
			/*for(i=0; i<999; i++){
			 
				numero[i] = '\0';
			}*/
			 
			 
			scanf("%s", numero);

			if (strcmp(numero,"0")==0)break;

			tam = strlen(numero);
			 
			 
			s = 0;
			 
			for(i=0; i< tam; i++){
			 
			temp[0] = numero[i];
			s = (-1)*s + atoi(temp);
			}
			 
			 if(s % 11 == 0) printf("%s is a multiple of 11.\n",numero);
			else printf("%s is not a multiple of 11.\n",numero);
			 
		 
		 
		}
	 
return 0;
  }




