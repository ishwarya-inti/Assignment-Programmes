

#include <stdio.h>

int main()
{
    int a;

    printf("Enter your mark: ");
    scanf("%d", &a);

    if (a < 0 || a > 100)
    {
        printf("Invalid mark");
    }
    else if (a >= 90)
    {
        printf("Grade O");
    }
    else if (a >= 80)
    {
        printf("Grade A+");
    }
    else if (a >= 70)
    {
        printf("Grade A");
    }
    else if (a >= 60)
    {
        printf("Grade B");
    }
    else if (a >= 50)
    {
        printf("Grade C");
    }
    else
    {
        printf("Fail");
    }

    printf("\nEnd of program");
}
    




