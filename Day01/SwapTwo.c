///////////////////////////////////////////////////////
//
//  File name :     SwapNumbers.c
//  Description :   Accept numbers from user and swap
//  Author :        Bharat Sanjay Patil
//  Date :          06/03/2026
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Swapping(int *iNo1 , int *iNo2)
{
    int Temp = 0;

    Temp = *iNo1;
    *iNo1 = *iNo2;
    *iNo2 = Temp;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the first number : ");
    scanf("%d",&iValue1);

    printf("Enter the second number : ");
    scanf("%d",&iValue2);

    Swapping(&iValue1 , &iValue2);

    printf("After Swapping : %d %d\n", iValue1, iValue2);

    return 0;
}