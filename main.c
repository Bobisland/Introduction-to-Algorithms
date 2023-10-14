#include "sort.h"
#include <stdio.h>
#include "1234 to 1 2 3 4.h"
#include "gpt.h"
#include "bubble.h"
#include "game.h"
#include "twosum.h"
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



//    int arr[] = {64, 34, 25, 12, 22, 11, 90};
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    printf("Unsorted array: \n");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    bubbleSort(arr, n); // 调用排序函数
//
//    printf("Sorted array: \n");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }



//    int row, col;
//    char current_player = 'X';
//    initialize_board();
//
//    printf("Welcome to Tic-Tac-Toe!\n");
//
//    for (int turn = 0; turn < 9; turn++) {
//        print_board();
//        printf("Player %c, enter your move (row and column): ", current_player);
//        scanf("%d %d", &row, &col);
//
//        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
//            printf("Invalid move. Try again.\n");
//            continue;
//        }
//
//        board[row][col] = current_player;
//
//        if (check_winner(current_player)) {
//            print_board();
//            printf("Player %c wins!\n", current_player);
//            break;
//        }

//        current_player = (current_player == 'X') ? 'O' : 'X';
//    }
//
//    if (!check_winner('X') && !check_winner('O')) {
//        print_board();
//        printf("It's a tie!\n");
//    }



    int arr[4] = {7,6,2,4};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    int return_size;
    int* result = twoSum(arr,arr_size,target,&return_size);

    printf("[ ");
    
    for(int i = 0;i < 2;i++)
    {
        printf("%d ",result[i]);
    }

    printf("]");

    return 0;

}