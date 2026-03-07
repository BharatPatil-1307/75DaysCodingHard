///////////////////////////////////////////////////////
//
//  File name :     PositiveNegative.c
//  Description :   Check Whether Positive or Negative number
//  Author :        Bharat Sanjay Patil
//  Date :          07/03/2026
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Check(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("Number is Positive\n");
    }
    else
    {
        printf("Number is Negative\n"); 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    Check(iValue);

    return 0;
}