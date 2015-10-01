#include "stdio.h"
#include <stdlib.h>
#include <math.h>
int main()
{
int nombre,test,a;
test=2;
a=0;
scanf("%d", &nombre);
while (test<nombre)
{
if(nombre%test==0){
a=1;
}
test++;	
}
if(a==1)
printf("%d n'est pas un nombre premier",nombre);
else printf("%d est un nombre premier",nombre);
exit(0);
}
