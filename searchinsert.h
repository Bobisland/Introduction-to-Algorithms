//
// Created by 罗义田 on 2023/10/13.
//

#ifndef INTRODUCTION_TO_ALGORITHMS_SEARCHINSERT_H
#define INTRODUCTION_TO_ALGORITHMS_SEARCHINSERT_H

int searchInsert(int* nums, int numsSize, int target)
{
    for(int i = 0;i < numsSize;i++)
    {
        if(nums[i] == target)
        {
            return i;
        }
    }
    for(int j = 0;j + 1< numsSize;j++)
    {
        if(target > nums[j] && target < nums[j + 1])
        {
            return j + 1;
        }
    }
    if(nums[0] > target)
    {
        return 0;
    }
    else
    {
        return numsSize;
    }
}

#endif //INTRODUCTION_TO_ALGORITHMS_SEARCHINSERT_H
