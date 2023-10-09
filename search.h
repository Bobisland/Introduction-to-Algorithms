//
// Created by 罗义田 on 2023/10/9.
//

#ifndef INTRODUCTION_TO_ALGORITHMS_SEARCH_H
#define INTRODUCTION_TO_ALGORITHMS_SEARCH_H

int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}









#endif //INTRODUCTION_TO_ALGORITHMS_SEARCH_H
