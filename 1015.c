#include<stdio.h>
#include<math.h>
int main(){
	double x1,y1,x2,y2,a,b;
	scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
	a=pow(x2-x1,2)+pow(y2-y1,2);
	b=sqrt(a);
	printf("%.4lf",b);
return 0;
	
	
	
	
}
