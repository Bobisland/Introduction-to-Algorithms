//
// Created by 罗义田 on 2023/10/11.
//

#ifndef INTRODUCTION_TO_ALGORITHMS_HANNO_H
#define INTRODUCTION_TO_ALGORITHMS_HANNO_H

#include <stdio.h>
#include <unistd.h>  // 用于sleep函数

#define NUM_PEGS 3
#define NUM_DISKS 3

char pegs[NUM_PEGS] = {'A', 'B', 'C'};

// 清屏函数
void clearScreen() {
    printf("\033[H\033[J");  // 使用ANSI转义码清屏
}

void printPegs(char towers[NUM_PEGS][NUM_DISKS], int disks[NUM_PEGS][NUM_DISKS]) {
    clearScreen();
    for (int i = NUM_DISKS - 1; i >= 0; i--) {
        for (int j = 0; j < NUM_PEGS; j++) {
            if (disks[j][i] == 0) {
                printf("   |   ");
            } else {
                printf("  %c%d  ", towers[j][i], disks[j][i]);
            }
        }
        printf("\n");
    }
    printf("  ---   ---   ---\n");
    for (int i = 0; i < NUM_PEGS; i++) {
        printf("  %c    ", pegs[i]);
    }
    printf("\n");
}

void moveDisk(int from, int to, char towers[NUM_PEGS][NUM_DISKS], int disks[NUM_PEGS][NUM_DISKS]) {
    int disk = disks[from][NUM_DISKS - 1];
    for (int i = NUM_DISKS - 1; i >= 0; i--) {
        if (disks[to][i] == 0) {
            disks[to][i] = disk;
            disks[from][NUM_DISKS - 1] = 0;
            break;
        }
    }
    printPegs(towers, disks);
    sleep(1);  // 暂停1秒以可视化移动
}

void hanoi(int n, int from, int to, int aux, char towers[NUM_PEGS][NUM_DISKS], int disks[NUM_PEGS][NUM_DISKS]) {
    if (n == 1) {
        moveDisk(from, to, towers, disks);
        return;
    }

    hanoi(n - 1, from, aux, to, towers, disks);
    moveDisk(from, to, towers, disks);
    hanoi(n - 1, aux, to, from, towers, disks);
}

//int main() {
//    char towers[NUM_PEGS][NUM_DISKS] = {{'A', 'A', 'A'}, {'B', 'B', 'B'}, {'C', 'C', 'C'}};
//    int disks[NUM_PEGS][NUM_DISKS] = {{1, 2, 3}, {0, 0, 0}, {0, 0, 0}};
//
//    printPegs(towers, disks);
//    hanoi(NUM_DISKS, 0, 2, 1, towers, disks);
//
//    return 0;
//}


#endif //INTRODUCTION_TO_ALGORITHMS_HANNO_H
