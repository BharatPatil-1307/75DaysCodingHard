///////////////////////////////////////////////////////////////
//
//  File Name   : LCM_Array.c
//  Description : Calculate LCM of N numbers
//  Author      : Bharat Sanjay Patil
//  Date        : 26/03/2026
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

// GCD function
int GCD(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// LCM of two numbers
int LCM(int a, int b)
{
    return (a / GCD(a, b)) * b;
}

// LCM of array
int LCMArray(int arr[], int size)
{
    int result = arr[0];

    for(int i = 1; i < size; i++)
    {
        result = LCM(result, arr[i]);
    }

    return result;
}

int main()
{
    int n = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ans = LCMArray(arr, n);

    printf("LCM of array is: %d\n", ans);

    return 0;
}