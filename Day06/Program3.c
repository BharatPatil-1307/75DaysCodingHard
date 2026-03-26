///////////////////////////////////////////////////////////////
//
//  File Name   : GCD.c
//  Description : Calculate GCD of two numbers
//  Author      : Bharat Sanjay Patil
//  Date        : 26/03/2026
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

int GCD(int iNo1, int iNo2)
{
    int iTemp = 0;

    while(iNo2 != 0)
    {
        iTemp = iNo2;
        iNo2 = iNo1 % iNo2;
        iNo1 = iTemp;
    }

    return iNo1;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter first number: ");
    scanf("%d", &iValue1);

    printf("Enter second number: ");
    scanf("%d", &iValue2);

    iRet = GCD(iValue1, iValue2);

    printf("GCD is: %d\n", iRet);

    return 0;
}