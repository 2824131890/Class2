#include "game.h"

//��������
void initialization(char arr[ROWS][COLS], int rows, int cols, char sz){
	int i = 0;
	for (i = 0; i <= rows; i++){
		int j = 0;
		for (j = 0; j <= cols; j++){
			arr[i][j] = sz;
		}
	}
}

//�������
void output(char arr[ROWS][COLS], int row, int col){
	int i = 0;
	printf("***********ɨ��************\n");
	for (i = 0; i <= row; i++){
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++){
		int j = 0;
		printf("%d ", i);
		for (j = 1; j <= col; j++){
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("***********ɨ��************\n");
}

//������
void Set_Thunder(char arr[ROWS][COLS], int row, int col){
	int count = 10;
	while (count){
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (arr[x][y] == '0'){
			arr[x][y] = '1';
			count--;
		}
	}
}

//������
static int dmine(char arr1[ROWS][COLS], int x, int y){
	return (arr1[x - 1][y] + arr1[x - 1][y - 1] + arr1[x][y - 1] + arr1[x + 1][y - 1] + arr1[x + 1][y] + arr1[x + 1][y + 1] + arr1[x][y + 1] + arr1[x - 1][y + 1]) - 8 * '0';
}

//����
void mine_clearance(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int row, int col){
	int x = 0;
	int y = 0;
	while (1){
		printf("����������:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col){
			if (arr1[x][y] == '1'){
				printf("�㱻ը����");
				output(arr1, ROW, COL);
				break;
			}
			else{
				int n = dmine(arr1, x, y);
				arr2[x][y] = n + '0';
				output(arr2, ROW, COL);
			}
		}
		else{
			printf("�����������������");
		}
	}
}