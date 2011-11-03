#include <stdio.h>
#include <string.h>
int main(){
int m[1000][1000],i,j,cont,cont1,p,n,c;

      scanf("%d %d %d",&p,&n,&c);

      while(p != 0||n != 0||c != 0){
         for(i = 0;i < n;i++){
             for(j = 0;j < p;j++){
                 scanf("%d",&m[i][j]);
              }
         }
         cont1 = 0;
         for(i = 0;i < p;i++){
             cont = 0;
             for(j = 0;j < n;j++){
                  if(m[j][i] == 1){
                        cont++;
                  }else{
                       if(cont >= c){
                            cont1++;
                       }
                        cont = 0;
                  }
             }
             if(cont >= c){cont1++;}
         }
         printf("%d\n",cont1);
         scanf("%d %d %d",&p,&n,&c);
    }
return 0;
}

