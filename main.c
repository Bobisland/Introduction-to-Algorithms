#include "sort.h"
#include <stdio.h>
int main()
{
    int arr[5] = {};
    for(int times = 0;times < 5;times++)
    {
        scanf("%d",&arr[times]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,n);
}