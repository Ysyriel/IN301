#include "stdio.h"


int main()
{
int i,j,produit,reste;
reste=0;
scanf("%d", &i);
scanf("%d", &j);
printf("%d x %d\n",i,j);
while(i!=1){

if (i%2 == 0){
produit=(i/2)*(2*j);
i=i/2;
j=2*j;
printf("=%d x %d + %d\n", i, j,reste);
}

else{
produit=(i-1)*j+j;
i=i-1;
reste=j+reste;
printf("=%d x %d + %d\n", i, j, reste);
}
}
printf("Le produit vaut %d",produit+reste);	
return(0);
}
