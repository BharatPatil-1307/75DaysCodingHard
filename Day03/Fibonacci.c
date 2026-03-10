#include<stdio.h>

void Fibonacci(int iNo)
{
    int i = 0;
    int a = 0, b = 1, c = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d", &iValue);

    Fibonacci(iValue);

    return 0;
}