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

	//Éú³ÉÆåÅÌ
	initialization(arr1, ROWS, COLS, '0');
	initialization(arr2, ROWS, COLS, '*');

	//Êä³öÆåÅÌ
	//	output(arr1, ROW, COL);
	//	output(arr2, ROW, COL);

	//ÉèÖÃÀ×
	Set_Thunder(arr1, ROW, COL);
	output(arr2, ROW, COL);
	//ÅÅÀ×
	mine_clearance(arr1, arr2, ROW, COL);
}

int main(){
	srand((unsigned int)time(NULL));
	int input = 0;
	do{
		menu();
		printf("ÇëÑ¡Ôñ:>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("É¨À×\n");
			game();
			break;
		case 0:
			printf("ÍË³öÓÎÏ·\n");
			break;
		default:
			printf("ÊäÈë´íÎó\n");
			break;
		}
	} while (input);
	return 0;
}