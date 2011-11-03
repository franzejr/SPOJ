#include <stdio.h>
#include <stdlib.h>


int main ()
{
	int vezes,x,y,n,m,i;
	scanf ("%d", &vezes);
	while (vezes > 0){
		scanf ("%d %d", &n, &m);
		for (i=1;i<=vezes;i++){
			scanf ("%d %d", &x,&y);
			if(x==n || y==m){
				printf ("divisa\n");
			}
			if(x > n){
				if (y > m){
					printf ("NE\n");
				}
                if (y < m) {
					printf ("SE\n");
				}
			}
			if (x < n){
				if (y > m){
					printf ("NO\n");
				}
                if (y < m){
					printf ("SO\n");
				}
			}
		}
		scanf ("%d", &vezes);
	}
	return 0;
}
