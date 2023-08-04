#include<stdio.h>
int main(){

int g,h;
float i,j;
scanf("%d%d%f",&g,&h,&i);
j=h*i;
int a,b;
float c,d;
scanf("%d%d%f",&a,&b,&c);
d=b*c;
printf("VALOR A PAGAR: R$ %.2f\n",d+j);

return 0;
}
