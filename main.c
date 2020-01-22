#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int arr[6];
    puts("Enter the current year"); scanf("%d",&arr[0]);
    puts("Enter the year of birth"); scanf("%d",&arr[1]);
    printf("\n");
    puts("Enter the current  month"); scanf("%d",&arr[2]);
    puts("Enter the month OF birth"); scanf("%d",&arr[3]);
    printf("\n");
    puts("Enter the current day"); scanf("%d",&arr[4]);
    puts("Enter the  day of birth"); scanf("%d",&arr[5]);
    printf("\n");
    float years=arr[0]-arr[1];
    float months=arr[2]-arr[3];
    float days=arr[4]-arr[5];
    printf("Your age is %.2f years %0.2f months %.2f days\n",years,months ,days);
    float age=(years*365.25 + months*30.0 + days)/365.0;
    printf("Your age in total is %.3f years\n",age);
}
