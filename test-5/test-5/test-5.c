#include <stdio.h>
#define N 6

//这个函数是冒泡排序
void maopao(int arr[], int n){
	int i = 0;
	for (i = 0; i < N - 1; i++){
		int j = 0;
		for (j = 0; j < N - 1 - i; j++){
			if (arr[j] > arr[j + 1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

int main(){
	int arr[N] = { 20, 60, 120, 400, 80, 260 };
	int a = 0;//这是输入的钱
	int tota = 0;
	int n = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &a);
	maopao(arr, n);

	int k = 0;
	for (k = 0; k < n; k++){
		if (tota + arr[k] <= a){
			tota += arr[k];
			printf("买入价格为%d元的商品\n", arr[k]);
		}
		else{
			break;
		}
	}
	return 0;
}