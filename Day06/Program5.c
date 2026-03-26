///////////////////////////////////////////////////////////////
//
//  File Name   : PerfectNumber.c
//  Description : Check whether a number is perfect or not
//  Author      : Bharat Sanjay Patil
//  Date        : 26/03/2026
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int i = 0, iSum = 0;

    for(i = 1; i <= iNo / 2; i++)
    {
        if(iNo % i == 0)
        {
            iSum += i;
        }
    }

    if(iSum == iNo)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("It is a Perfect Number\n");
    }
    else
    {
        printf("It is NOT a Perfect Number\n");
    }

    return 0;
}