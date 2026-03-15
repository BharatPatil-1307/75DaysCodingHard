///////////////////////////////////////////////////////
//
//  File name :     NumberTriangle.c
//  Description :   Print Number Triangle Pattern
//  Author :        Bharat Sanjay Patil
//  Date :          15/03/2026
//
///////////////////////////////////////////////////////

#include<stdio.h>

void NumberTriangle(int iNo)
{
    int i = 0, j = 0;

    for(i = 1; i <= iNo; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of rows : ");
    scanf("%d",&iValue);

    NumberTriangle(iValue);

    return 0;
}