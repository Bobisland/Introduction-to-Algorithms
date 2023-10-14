//
// Created by 罗义田 on 2023/10/12.
//

#ifndef INTRODUCTION_TO_ALGORITHMS_TWOSUM_H
#define INTRODUCTION_TO_ALGORITHMS_TWOSUM_H
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int* result = (int*)malloc(2 * sizeof(int));

    int i, j;
    for (i = 0; i < numsSize; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                result[0] = i;
                result[1] = j;
                *returnSize;
                return result;
            }
        }
    }
    free(result);
    return NULL;
}

#endif //INTRODUCTION_TO_ALGORITHMS_TWOSUM_H
