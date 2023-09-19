#include <stdio.h>

int main()
{
    char x[15];
    char y[15];
    char z[15];
    scanf("%s", x);
    scanf("%s", y);
    scanf("%s", z);

    if (x[0] == 'v' && y[0] == 'a' && z[0] == 'c')printf("aguia\n");
    if (x[0] == 'v' && y[0] == 'a' && z[0] == 'o')printf("pomba\n");
    if (x[0] == 'v' && y[0] == 'm' && z[0] == 'o')printf("homem\n");
    if (x[0] == 'v' && y[0] == 'm' && z[0] == 'h')printf("vaca\n");
    if (x[0] == 'i' && y[0] == 'i' && z[2] == 'm')printf("pulga\n");
    if (x[0] == 'i' && y[0] == 'i' && z[2] == 'r')printf("lagarta\n");
    if (x[0] == 'i' && y[0] == 'a' && z[0] == 'h')printf("sanguessuga\n");
    if (x[0] == 'i' && y[0] == 'a' && z[0] == 'o')printf("minhoca\n");

    return 0;
}
