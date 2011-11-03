#include <stdio.h>
#include <stdlib.h>


	int grafo[101][101];
	int E=1,L=1, linha=1, coluna=1;
	int isOk=0;
	int visitados[101];

int profundidade(int i,int visitados[]){
	int j;

	visitados[i] = 1;

		isOk++;
	for(j=1; j<= E; j++){
		
		if (!visitados[j] && grafo[i][j] )  profundidade(j,visitados);
	}

	//printf("isOk: %d e L: %d\n", isOk, L);	

	if(isOk == E) return 1; //deu certo
	else return 0; //não deu certo
}

int main(){
	int i,j;
	int contador, retorno, quantidade=1;
	
	while(1){
		contador =1;
		scanf("%d %d", &E, &L);
		isOk=0;
		if(E == 0 && L == 0 ) break;

		for(i=1; i<=100; i++){
			visitados[i] = 0;
			for(j=1;j<=100; j++){
				grafo[i][j] = 0;
			}
		}

		
		while(contador <= L ){

			scanf("%d %d", &linha, &coluna);
			
			grafo[linha][coluna] = 1;
			grafo[coluna][linha] = 1;

			contador++;

		}

		retorno = profundidade(1, visitados);
			
		if(retorno == 1) printf("Teste %d\nnormal\n\n", quantidade);
		else printf("Teste %d\nfalha\n\n", quantidade);
		
		quantidade++;

	}

return 0;
}
