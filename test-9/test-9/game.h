#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2

//��������
void initialization(char arr[ROWS][COLS], int rows, int cols, char sz);

//�������
void output(char arr[ROWS][COLS], int row, int col);

//������
void Set_Thunder(char arr[ROWS][COLS], int row, int col);

//����
void mine_clearance(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int row, int col);
