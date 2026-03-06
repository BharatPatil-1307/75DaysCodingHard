///////////////////////////////////////////////////////
//
//  File name :     EvenOdd.c
//  Description :   Accept numbers check Even Or Odd
//  Author :        Bharat Sanjay Patil
//  Date :          06/03/2026
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int EvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0;
    bool bRet = false;

    printf("Enter the Number :");
    scanf("%d",&iValue1);

    bRet = EvenOdd(iValue1);

    if(bRet == true)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Numbr is Odd\n");
    }

    return 0;
}