#include "stdio.h"

int main()
{
int temps, heure, min, sec;
scanf("%d", &temps);
heure=temps/3600;
min=(temps-3600*heure)/60;
sec=temps-3600*heure-60*min;
if (heure>1 && min>1 && sec>1)
	{
	printf("%d secondes correspond à %d heures %d minutes %d secondes" ,temps, heure, min, sec);
	}
	else if (min>1 && sec>1)
	{
	printf("%d secondes correspond à %d heure %d minutes %d secondes" ,temps, heure, min, sec);
	}
		else if (sec>1)
		{
		printf("%d secondes correspond à %d heure %d minute %d secondes" ,temps, heure, min, sec);
		}
			else
			{
			printf("%d secondes correspond à %d heure %d minute %d seconde" ,temps, heure, min, sec);
			}
exit(0);
}
