#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
	int n,m;

	int vetor[10000];

	while( scanf("%d %d", &n, &m) == 2){

		for(int i=0;i<n; i++)		
			scanf("%d", &vetor[i]);
		sort(vetor,vetor+n); //vetor ordenado agora...
		
		for(int i=0; i<m; i++)
			printf("%d\n", vetor[(n-1)-i]);
	}
return 0;
}
