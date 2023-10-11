#include "sort.h"
#include <stdio.h>
#include "1234 to 1 2 3 4.h"
#include "gpt.h"
#include "bubble.h"

int main()
{
//    int arr[5] = {};
//    for(int times = 0;times < 5;times++)
//    {
//        scanf("%d",&arr[times]);
//    }
//    int n = sizeof(arr) / sizeof(arr[0]);
//      sort(arr,n);




//    int num1;
//    scanf("%d",&num1);
//    num_sort(num1);



    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, n); // 调用排序函数

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;

}