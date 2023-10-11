//
// Created by 罗义田 on 2023/10/11.
//

#ifndef INTRODUCTION_TO_ALGORITHMS_BUBBLE_H
#define INTRODUCTION_TO_ALGORITHMS_BUBBLE_H

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换 arr[j] 和 arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
#endif //INTRODUCTION_TO_ALGORITHMS_BUBBLE_H
