#include<stdio.h>
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	if(x>y&&x>z){
		printf("%d eh o maior",x);
	}else if(y>x&&y>z){
		printf("%d eh o maior",y);
	}else{
		printf("%d eh oh maior",z);
	}
	
return 0;
	
	
	
}
