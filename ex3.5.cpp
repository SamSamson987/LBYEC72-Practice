#include <stdio.h>
#include <stdlib.h>
#define Pi 3.1416
int main()
{
int r;
float A;
printf(“\nEnter the radius:” );
scanf("%lf", &r);
A=Pi*r*r;
printf("The area: %5.2f \n", A);
system("PAUSE");
return 0;
}

