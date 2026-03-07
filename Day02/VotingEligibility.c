///////////////////////////////////////////////////////
//
//  File name :     VotingEligibility.c
//  Description :   Accept age and check voting eligibility
//  Author :        Bharat Sanjay Patil
//  Date :          07/03/2026
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckVoting(int iAge)
{
    if(iAge >= 18)
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

    printf("Enter your age : ");
    scanf("%d",&iValue);

    bRet = CheckVoting(iValue);

    if(bRet == true)
    {
        printf("You are eligible for voting\n");
    }
    else
    {
        printf("You are not eligible for voting\n");
    }

    return 0;
}