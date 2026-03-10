#include<stdio.h>

int SumNumbers(int iNo)
{
    int iSum = 0, iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iDigit += iSum;
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    int iRet = SumNumbers(iValue);

    printf("Summation is : %d\n",iRet);

    return 0;
}