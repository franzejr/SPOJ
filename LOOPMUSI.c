#include <stdio.h>
#include <stdlib.h>



int main(){
	
	int  vetor[10002];
	int i,n, pico=0;
	while(1){
		pico =0;

		scanf("%d", &n);
		if(n == 0) break;
		
		for(i=1;i<=n;i++){
			scanf("%d", &vetor[i]); 
		}
		vetor[n+1] = vetor[1];
		vetor[n+2] = vetor[2];
		

		for(i=1; i<=n; i++){
			if((vetor[i] > vetor[i+1]) && ( vetor[i+1] < vetor[i+2] ) ) { pico++;
			}

			if(( vetor[i] < vetor[i+1] ) && ( vetor[i+1] > vetor[i+2]) ){ pico++;
			}
		}
			

		printf("%d\n", pico);
		}

return 0;
}


