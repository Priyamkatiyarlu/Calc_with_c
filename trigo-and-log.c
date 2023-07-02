#include <stdio.h>
#include <math.h> // for Trigonometric, Logarithmic and Exponential function
#define PI 3.141592654

long long intResult = 0;
double k = 0, result = 0;
int menu()
{
    int ch;
    printf("\n1. Sine");
    printf("\n2. Cosine");
    printf("\n3. Tangent");
    printf("\n4.log(base e)");
    printf("\n5.log(base 10)");
    printf("\n6.e^x");
    printf("\n7.Exit");
    printf("\nEnter your choice: ");

    scanf("%d", &ch);
    return ch;
}
void sine()
{
    double a;
    printf("Enter angle in radians: ");
    scanf("%lf", &a);
    result = sin(a);
    printf("\nResult = %lf", result);
}

// Function to calculate cosine of angle in radians
void cosine()
{
    double a;
    printf("Enter angle in radians: ");
    scanf("%lf", &a);
    result = cos(a);
    printf("\nResult = %lf", result);
}

// Function to calculate tangent of angle in radians
void tangent()
{
    double a;
    printf("Enter angle in radians: ");
    scanf("%lf", &a);
    result = tan(a);
    printf("\nResult = %lf", result);
}

// Function to calculate log (base e)
void logBasee()
{
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    if(a<=0.0)
    {
    printf("Math Error\n");
    }
    else
    {
    result = log(a);
    printf("\nResult = %lf", result);
    }
}

// Function to calculate log (base 10)
void logBase10()
{
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    if(a<=0.0)
    {
    printf("Math Error\n");
    }
    else
    {
    result = log10(a);
    printf("\nResult = %lf", result);
    }
}

// Function to calculate e^x
void eToPowerX()
{
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    result = exp(a);
    printf("\nResult = %lf", result);
}
void main()
{
    
    int l = 0;

    // Main execution loop
    while(1)
    {

        switch(menu())
        {
            case 1: sine();
                    k = 1;
                    break;

            case 2: cosine();
                    k = 1;
                    break;

            case 3: tangent();
                    k = 1;
                    break;

            case 4:logBasee();
                    k = 1;
                    break;

            case 5:logBase10();
                    k = 1;
                    break;

            case 6:eToPowerX();
                    k = 1;
                    break;

            case 7:l = 1;
                    break;

            default:
                    printf("\nInvalid Choice !");
        }

        printf("\nPress any button to continue......");
        getch();
        system("cls");

        // To break out of this menu loop
        if(l == 1)
            break;
    }
}
