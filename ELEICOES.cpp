#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){

	int vetor[100000];
	int number,votos;
	
	cin >> number;

	for(int i = 0; i< number; i++){
		cin >> votos;
		vetor[i] = votos;

	}

	sort(vetor,vetor+number);
	
		 
         int cont = 1;
         int maior = 0;
	 int p;
         for(int i = 0;i < number-1;i++){
           
            if(vetor[i] == vetor[i+1]){
                cont++;
                if(cont > maior){
                    maior = cont;
		    p = i;
                }
            }else{
                 cont = 1;
            }
         }
         cout << vetor[p];
	

return 0;
}
