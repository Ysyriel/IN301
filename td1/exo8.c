#include "stdio.h"
#include <stdlib.h>
#include <math.h>
int main()
{
int u,n,i;
scanf("%d", &u);
while(u!=1)
{
	i++;
	if(u%2==0){
		u=u/2;}
	else{
		u=3u+1;}

}
printf("%d",i);
exit(0);
}
