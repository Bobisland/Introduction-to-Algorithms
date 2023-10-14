//
// Created by 罗义田 on 2023/10/14.
//

#ifndef INTRODUCTION_TO_ALGORITHMS_ISPALINDROME_H
#define INTRODUCTION_TO_ALGORITHMS_ISPALINDROME_H

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool isPalindrome(int x)
{
    char arr[20];
    sprintf(arr,"%d",x);
    if(arr[0] == "-")
    {
        return false;
    }
    else
    {
        for(int i = 0,j = strlen(arr) - 1;i < j;i++,j--)
        {
            if(arr[i] != arr[j])
            {
                return false;
                break;
            }
        }
    }
    return true;
}

#endif //INTRODUCTION_TO_ALGORITHMS_ISPALINDROME_H
