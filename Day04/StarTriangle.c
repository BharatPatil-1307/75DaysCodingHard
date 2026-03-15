#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0, j = 0;

    for(i = 1; i <= iNo; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}