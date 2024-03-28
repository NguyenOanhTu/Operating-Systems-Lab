#include <stdio.h>

int main()
{
    float x,y,z;
    printf("\nX: ");
    scanf("%f", &x);
    printf("\nY: ");
    scanf("%f", &y);
    printf("\nZ: ");
    scanf("%f", &z);
if (x >= y && x >= z)
     {
         printf("Max = %f", x);
     }
     else if (y >= x && y >= z)
     {
         printf("Max = %f", y);
     }
     else
     {
         printf("Max = %f", z);
     }
	return 0;
}
