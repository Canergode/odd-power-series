#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i;
    float x,series=0;

    // Get positive integer n from user
    printf("Enter a positive integer:\n");
    scanf("%d",&n);

    // Get real number x from user
    printf("Enter a real number:\n");
    scanf("%f",&x);

    // Calculate series:sum of i/x^(i+1) for odd i from 1 to 2n-1
    for(i=1;i<=2*n-1;i+=2)
    {
       series=series+i/pow(x,i+1);
    }

    // Print the result
    printf("Series=%f",series);
    return 0;
}
