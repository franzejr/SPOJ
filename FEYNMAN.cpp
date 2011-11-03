#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n=1,i,soma;

	while(n != 0){
		cin >> n;
		soma=0;
		for(i=1; i<=n; i++){
			soma += pow(i,2);
		}
		if(soma !=0) cout << soma<<endl;
	}

return 0;
}
