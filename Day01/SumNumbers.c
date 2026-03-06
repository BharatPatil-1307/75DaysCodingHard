///////////////////////////////////////////////////////
//
//  File name :     SumNumbers.c
//  Descreption :   Accept two numbers from user and summation 
//  Author :        Bharat Sanjay patil
//  Date :          06/04/2026
//
///////////////////////////////////////////////////////

#include<stdio.h>

int Summation(int iSum1 , int iSum2)
{
    int iAddi = iSum1 + iSum2;
    return iAddi;
}

int main()
{
    int No1 = 0, No2 = 0;

    printf("Enter the first Number :");
    scanf("%d",&No1);

    printf("Enter the Second Number :");
    scanf("%d",&No2);

    int iRet = Summation(No1 , No2);

    printf("Addtion is : %d\n", iRet);

    return 0;
}