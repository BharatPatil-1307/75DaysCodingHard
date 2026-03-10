#include<stdio.h>

void PrintNumber(int iNo)
{
    int i = 0;
    for(i = 1; i <= iNo; i++)
    {
        printf("%d\n",i);
    }
    printf("\n");
}

int main()
{
    int iValue = 100;

    PrintNumber(iValue);

    return 0;
}