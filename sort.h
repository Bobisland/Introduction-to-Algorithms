//
// Created by 罗义田 on 2023/10/9.
//

#ifndef ALGORITHMS_SORT_H
#define ALGORITHMS_SORT_H
#include <stdio.h>
void sort(int arr[],int n)
{
    for(int j = 1;j < n;j++)
    {
        int i = j - 1;
        int key = arr[j];
        while (i >= 0 && arr[i] > key)
        {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = key;
    }
    for(int a = 0;a < n;a++)
    {
        printf("%d ",arr[a]);
    }
    printf("\n");
}
#endif //ALGORITHMS_SORT_H