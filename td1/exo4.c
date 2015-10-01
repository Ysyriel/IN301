#include "stdio.h"

int main()
{
int nombre,test;
test=2;
scanf("%d", &nombre);
while (test<nombre)
{
if (nombre%test=0){
printf("%d n'est pas un nombre premier",nombre);}
else if (test=nombre-1){
printf("%d est un nombre premier",nombre);}
test++;
}
exit(0);
}
