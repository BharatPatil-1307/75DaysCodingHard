///////////////////////////////////////////////////////
//
//  File name :     CountDigit.c
//  Description :   Accept number and Count digits
//  Author :        Bharat Sanjay Patil
//  Date :          17/03/2026
//
///////////////////////////////////////////////////////

// input : 123
// output: 3

#include<stdio.h>

int CountDigit(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;   // remove last digit
    }

    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = CountDigit(iValue);

    printf("Number of Digits is : %d\n", iRet);

    return 0;
}