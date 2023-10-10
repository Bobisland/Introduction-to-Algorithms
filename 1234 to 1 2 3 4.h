//
// Created by 罗义田 on 2023/10/10.
//

#ifndef INTRODUCTION_TO_ALGORITHMS_1234_TO_1_2_3_4_H
#define INTRODUCTION_TO_ALGORITHMS_1234_TO_1_2_3_4_H
#include <stdio.h>
void num_sort(int n)
{
    if(n > 0)
    {
        num_sort(n / 10);
        printf("%d ",n % 10);
    }

}

#endif //INTRODUCTION_TO_ALGORITHMS_1234_TO_1_2_3_4_H
