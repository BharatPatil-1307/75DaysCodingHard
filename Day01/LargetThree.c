///////////////////////////////////////////////////////
//
//  File name :     SwapNumbers.c
//  Description :   Accept numbers from user and swap
//  Author :        Bharat Sanjay Patil
//  Date :          06/03/2026
//
///////////////////////////////////////////////////////

#include<stdio.h>

int Larget(int iNo1 , int iNo2 , int iNo3)
{
    if((iNo1 >= iNo2) && (iNo2 >= iNo3))
    {
        return iNo1;
    }
    else if(iNo2 >= iNo1 && (iNo2 >= iNo3))
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter the first Number :");
    scanf("%d",&iValue1);

    printf("Enter the Second Number :");
    scanf("%d",&iValue2);

    printf("Enter the Third Number :");
    scanf("%d",&iValue3);

    iRet = Larget(iValue1 , iValue2 , iValue3);

    printf("Larget Number is : %d\n",iRet);

    return 0;
}