///////////////////////////////////////////////////////
//
//  File name :     SumDigit.c
//  Description :   Accept number and sum all digits
//  Author :        Bharat Sanjay Patil
//  Date :          17/03/2026
//
///////////////////////////////////////////////////////

// input : 123
// output: 6

#include<stdio.h>

int SumDigit(int iNo)
{
    int iSum = 0, iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = SumDigit(iValue);

    printf("Summation of all digits is : %d\n", iRet);

    return 0;
}