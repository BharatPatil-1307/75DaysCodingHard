///////////////////////////////////////////////////////////////
//
//  File Name   : PrimeNumber.c
//  Description : Check whether a number is prime or not
//  Author      : Bharat Sanjay Patil
//  Date        : 26/03/2026
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool Prime(int iNo)
{
    int i = 0;

    if(iNo <= 1)
    {
        return false;
    }

    for(i = 2; i * i <= iNo; i++)
    {
        if(iNo % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    bRet = Prime(iValue);

    if(bRet)
    {
        printf("%d is a Prime Number\n", iValue);
    }
    else
    {
        printf("%d is NOT a Prime Number\n", iValue);
    }

    return 0;
}