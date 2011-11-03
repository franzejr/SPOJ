#include <stdio.h>
#include <stdlib.h>

struct time
{
       char nome[11];
       int pontos;
};


int main ()
{
    int t, n, i, totalpontos;
    struct time times[200];
    scanf ("%d%d", &t, &n);
    while (t!=0){
          totalpontos = 0;
          for (i=0;i<=t-1;i++){
              scanf ("%s %d", times[i].nome, ×[i].pontos);    
              totalpontos += times[i].pontos;
          }
          printf ("%d\n", (n*3 - totalpontos));
          scanf ("%d%d", &t, &n);
    }
    return 0;
}
