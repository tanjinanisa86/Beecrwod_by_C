#include<stdio.h>
int main()
{
	double A,B,C;
	scanf("%lf%lf%lf",&A,&B,&C);
	printf("TRIANGULA: %.3lf\n",.5*A*C);
	double pi=3.14159;
	printf("CIRCULA: %.3lf\n",pi*C*C);
	printf("TRAPEZIO: %.3lf\n",(A+B)/2*C);
	printf("QUADRADO: %.3lf\n",B*B);
	printf("RETANGULO: %.3lf\n",A*B);	
	
return 0;	
}
