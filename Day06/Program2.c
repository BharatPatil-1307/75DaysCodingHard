///////////////////////////////////////////////////////////////
//
//  File Name   : PrimeRange.c
//  Description : Display prime numbers in given range
//  Author      : Bharat Sanjay Patil
//  Date        : 26/03/2026
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
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

void DisplayPrime(int iStart, int iEnd)
{
    int i = 0;

    for(i = iStart; i <= iEnd; i++)
    {
        if(CheckPrime(i))
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting number: ");
    scanf("%d", &iValue1);

    printf("Enter ending number: ");
    scanf("%d", &iValue2);

    DisplayPrime(iValue1, iValue2);

    return 0;
}