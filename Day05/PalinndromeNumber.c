///////////////////////////////////////////////////////
//
//  File name :     PalindromeNumber.c
//  Description :   Check whether number is Palindrome
//  Author :        Bharat Sanjay Patil
//  Date :          17/03/2026
//
///////////////////////////////////////////////////////

//Input  : 121
//Output : Palindrome

#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iTemp = iNo;
    int iDigit = 0;
    int iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
    }

    if(iTemp == iRev)
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

    bRet = CheckPalindrome(iValue);

    if(bRet == true)
    {
        printf("Number is Palindrome\n");
    }
    else
    {
        printf("Number is not Palindrome\n");
    }

    return 0;
}