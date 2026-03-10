#include<stdio.h>

void MultiplicationTable(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d x %d = %d\n", iNo, iCnt, iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Table Number : ");
    scanf("%d", &iValue);

    MultiplicationTable(iValue);

    return 0;
}