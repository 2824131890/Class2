#include "game.h"

void menu(){
	printf("*********************\n");
	printf("*****  1.play   *****\n");
	printf("*****  0.exit   *****\n");
	printf("*********************\n");
}

void game(){
	char arr1[ROWS][COLS];
	char arr2[ROWS][COLS];

	//��������
	initialization(arr1, ROWS, COLS, '0');
	initialization(arr2, ROWS, COLS, '*');

	//�������
	//	output(arr1, ROW, COL);
	//	output(arr2, ROW, COL);

	//������
	Set_Thunder(arr1, ROW, COL);
	output(arr2, ROW, COL);
	//����
	mine_clearance(arr1, arr2, ROW, COL);
}

int main(){
	srand((unsigned int)time(NULL));
	int input = 0;
	do{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("ɨ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	return 0;
}