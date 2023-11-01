#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2

//生成棋盘
void initialization(char arr[ROWS][COLS], int rows, int cols, char sz);

//输出棋盘
void output(char arr[ROWS][COLS], int row, int col);

//设置雷
void Set_Thunder(char arr[ROWS][COLS], int row, int col);

//排雷
void mine_clearance(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int row, int col);
