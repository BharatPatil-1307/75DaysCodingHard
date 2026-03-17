///////////////////////////////////////////////////////
//
//  File name :     ArmstrongNumber.c
//  Description :   Check whether number is Armstrong
//  Author :        Bharat Sanjay Patil
//  Date :          17/03/2026
//
///////////////////////////////////////////////////////

//Input  : 153
//Output : Armstrong Number

#include<stdio.h>
#include<stdbool.h>

bool CheckArmstrong(int iNo)
{
    int iTemp = iNo;
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + (iDigit * iDigit * iDigit);
        iNo = iNo / 10;
    }

    if(iTemp == iSum)
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

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    bRet = CheckArmstrong(iValue);

    if(bRet == true)
    {
        printf("Number is Armstrong\n");
    }
    else
    {
        printf("Number is Not Armstrong\n");
    }

    return 0;
}