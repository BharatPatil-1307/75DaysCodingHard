///////////////////////////////////////////////////////
//
//  File name :     LeapYear.c
//  Description :   Accept year and check leap year
//  Author :        Bharat Sanjay Patil
//  Date :          07/03/2026
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckLeapYear(int iYear)
{
    if((iYear % 400 == 0) || (iYear % 4 == 0 && iYear % 100 != 0))
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

    printf("Enter the Year : ");
    scanf("%d",&iValue);

    bRet = CheckLeapYear(iValue);

    if(bRet == true)
    {
        printf("It is a Leap Year\n");
    }
    else
    {
        printf("It is not a Leap Year\n");
    }

    return 0;
}