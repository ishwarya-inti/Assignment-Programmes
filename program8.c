
    


#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter your weight in kg and height in meters: ");
    scanf("%f%f", &a, &b);

    if (b <= 0 || a < 0)
    {
        printf("Invalid weight or height");
    }
    else
    {
        c = a / (b * b);
        printf("BMI = %.2f", c);

        if (c < 18.5)
        {
            printf("\nUnderweight");
        }
        else if (c < 25)
        {
            printf("\nNormal");
        }
        else if (c < 30)
        {
            printf("\nOverweight");
        }
        else
        {
            printf("\nObese");
        }
    }

    printf("\nEnd of program");

    
}









