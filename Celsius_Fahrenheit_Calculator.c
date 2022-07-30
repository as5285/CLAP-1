#include <stdio.h>

int main()
{
    float temp, celsius, fahrenheit;
    char u;
    printf("To which unit do you want to convert?(c/f): ");
    scanf("%c",&u);
    if((u=='c') || (u=='C'))
    {
        // Converting to Celsius
        printf("Enter Temperature in Fahrenheit: ");
        scanf("%f",&temp);
        celsius = 5.0/9.0*(temp - 32.0);
        printf("Temperature in Celsius: %.2f",celsius);
    }
    else if((u=='f') || (u=='f'))
    {
        // Converting to Fahrenheit
        printf("Enter Temperature in Celsius: ");
        scanf("%f",&temp);
        fahrenheit = (temp*9.0/5.0) + 32;
        printf("Temperature in Fahrenheit: %.2f",fahrenheit);
    }
    else
    {
        printf("Invalid Format!!! :(");
    }
    
    return 0;
}

