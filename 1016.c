#include<stdio.h>
int main()
{
	int distance;
	scanf("%d",&distance);
	int speedX=60;
	int speedY=90;
	int timeperKM=2;
	int timeY=distance*timeperKM;
	printf("%d minutos\n",timeY);
return 0;
}
