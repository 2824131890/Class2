#include "test-2.h"

//int main() {
//    char s[]="ABCD", *p;
//    for (p = s + 1; p < s + 4; p++)
//        printf("%s\n", p);
//}

//int getSize(int data[]){
//    return sizeof(data);
//}
// 
//int main(){
//    int data1[] = {1,2,3,4,5};
//    int size1 = sizeof(data1);
//     
//    int* data2 = data1;
//    int size2 = sizeof(data2);
//     
//    int size3 = getSize(data1);
//     
//    printf("%d, %d, %d", size1, size2, size3);
//    return 0;
//}

//int main() {
//    char* a = "12";
//	printf("%d\n",sizeof(a));
//}

//main() {
//    int a = 7, b = 8, *p, *q, *r;
//    p = &a;
//    q = &b;
//    r = p;
//    p = q;
//    q = r;
//    printf("%d,%d,%d,%d\n", *p, *q, a, b);
//}

//int main() {
//    int m[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//    int(*p)[4] = (int(*)[4])m;
//    printf("%d", p[1][2]);
//    return 0;
//}

//int main() {
//    int a[] = {1, 2, 3, 4, 5, 6}, *p;
//    p = a;
//    *(p+3) += 2;
//    printf(" %d,%d", *p, *(p+3));
//}

//int main(){
//	int i = 0,sum = 0,tmp = 0;
//	printf("请输入累加次数：");
//	scanf("%d",&tmp);
//	for(i=1;i<=tmp;i++){
//		sum += i;	
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//int main(){
//	printf("*******************\n");
//	printf("Very good!\n");
//	printf("*******************\n");
//	return 0;
//}

//int main(){
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	int left = 0;
//	int right = sz - 2;
//	
//	while(left <= right){
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		Sleep(600);
////		system("cls");
//		printf("%s\n",arr2);
//		left++;
//		right--;
//	}
//	return 0;
//}

//int main(){
//	int a = 0;
//	while(a < 10){
//		int i = 0,p = 1,tmp = 0;
//			scanf("%d",&tmp);
//			for(i = 1; i <= tmp; i++){
//				p = p * i;
//			}
//			printf("\n%d\n\n",p);
//			a++;
//	}
//	return 0;
//}
