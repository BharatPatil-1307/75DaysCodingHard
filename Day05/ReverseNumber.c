///////////////////////////////////////////////////////
//
//  File name :     ReverseNumber.c
//  Description :   Accept number and display reverse
//  Author :        Bharat Sanjay Patil
//  Date :          17/03/2026
//
///////////////////////////////////////////////////////

//Input  : 1234
//Output : 4321

#include<stdio.h>

int ReverseNumber(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;       
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;     
    }

    return iRev;
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    int iRet = ReverseNumber(iValue);

    printf("After Reversing number : %d\n", iRet);

    return 0;
}