///////////////////////////////////////////////////////
//
//  File name :     GradeCalculator.c
//  Description :   Accept marks and display grade
//  Author :        Bharat Sanjay Patil
//  Date :          07/03/2026
//
///////////////////////////////////////////////////////

#include<stdio.h>

char CalculateGrade(int iMarks)
{
    if(iMarks >= 90)
    {
        return 'A';
    }
    else if(iMarks >= 75)
    {
        return 'B';
    }
    else if(iMarks >= 60)
    {
        return 'C';
    }
    else if(iMarks >= 50)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

int main()
{
    int iValue = 0;
    char cRet = ' ';

    printf("Enter the marks : ");
    scanf("%d",&iValue);

    cRet = CalculateGrade(iValue);

    printf("Grade : %c\n",cRet);

    return 0;
}