#include <stdio.h>

int main()
{
    float input, numb_2, numb_3, output;
    printf("Enter number to be converted: ");
    scanf("%f",&input);
    printf("\nEnter 0 if Fahrenheit, 1 if Celsius, or 2 if Kelvin: ");
    scanf("%f",&numb_2);
    if(numb_2==0)
    {
        printf("\nEnter 1 for Celsius or 2 for Kelvin to convert: ");
        scanf("%f",&numb_3);
        printf("\n");
        if(numb_3==1)
        {
            output = (input-32)*5/9;
            printf("%0.2f C",output);
        }
        else if(numb_3==2)
        {
            output = (input-32)*5/9+273.15;
            printf("%0.2f K",output);
        }
        else
        {
            printf("NOT FOUND.");
        }
    }
    else if(numb_2==1)
    {
        printf("Enter 0 for Fahrenheit or 2 for Kelvin to convert: ");
        scanf("%f",&numb_3);
        printf("\n");
        if(numb_3==0)
        {
            output = (input*9/5)+32;
            printf("%0.2f F",output);
        }
        else if(numb_3==2)
        {
            output = input+273.15;
            printf("%0.2f K",output);
        }
        else
        {
            printf("NOT FOUND.");
        }
    }
    else if(numb_2==2)
    {
        printf("Enter 0 Fahrenheit or 1 Celsius to convert: ");
        scanf("%f",&numb_3);
        printf("\n");
        if(numb_3==0)
        {
            output = (input-273.15)*9/5+32;
            printf("%0.2f F",output);
        }
        else if(numb_3==0)
        {
            output = input-273.15;
            printf("%0.2f C",output);
        }
        else
        {
            printf("NOT FOUND.");
        }
    }
    else
    {
        printf("NOT FOUND.");
    }
    printf("\n");
    return 0;
}
