#include <stdio.h>
/*
 * Austin Boucher
 * 01/25/2015
 */


int main (void)
{
    double fahrenheit;
    double celsius;
    printf("Enter a temperature in degrees Fahrenheit > ");
    scanf("%lf", &fahrenheit);
    celsius = (double)(((fahrenheit-32)/1.8));
    printf("%lf degrees Fahrenheit is equal to %lf degrees Celsius \n", fahrenheit, celsius);
    printf("\n");
    printf("Enter a temperature in degrees Celsius > ");
    scanf("%lf", &celsius);
    fahrenheit = (double)((celsius *1.8)+32);
    printf("%lf degrees Celsius is equal to %lf degrees Fahrenheit \n ", celsius, fahrenheit);
    return(0);
}
