#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int p,r,participante[100],n,j,tst=1;
    int ordem,m,k,i;
    cin >> p >> r;
    while(p != 0 && r != 0) {
            for(i=0;i<p;i++) {
                   scanf("%d", &participante[i]);
            }
            for(k = 0 ;k < r ;k++) {
              scanf("%d%d",&n,&j);
              m = 0;
              for(i=0;i<n;i++) {
                   scanf("%d",&ordem);
                   if(ordem == j) {
                            participante[m] = participante[i];
                            m++;
                   }
              }
            }
            cout << "Teste " << tst++ << "\n" << participante[0] << "\n" << endl;
            cin >> p >> r;
    }
    cin.get();
    return 0;
}


