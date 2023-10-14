//
// Created by 罗义田 on 2023/10/12.
//

#ifndef INTRODUCTION_TO_ALGORITHMS_GAME_H
#define INTRODUCTION_TO_ALGORITHMS_GAME_H

#include <stdio.h>

char board[3][3]; // 井字棋棋盘

// 初始化棋盘
void initialize_board() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

// 打印棋盘
void print_board() {
    printf("  0 1 2\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) {
                printf("|");
            }
        }
        printf("\n");
        if (i < 2) {
            printf("  -+-+-\n");
        }
    }
    printf("\n");
}

// 检查是否有获胜者
int check_winner(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return 1; // 一行相同
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return 1; // 一列相同
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return 1; // 主对角线相同
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return 1; // 副对角线相同
    }
    return 0; // 无获胜者
}


#endif //INTRODUCTION_TO_ALGORITHMS_GAME_H
