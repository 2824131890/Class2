#include <stdio.h>

//10个整数中的最大值
//int main(){
//	int i = 0, max;
//	int arr[10];
//	for(i = 0; i <= 9; i++){
//		scanf("%d", &arr[i]);
//		
//		max = arr[0];
//		int j = 0;
//		for(j = 1; j <= 9; j++){
//			if(arr[j] > max){
//				max = arr[j];
//			}
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//1000-2000之间的闰年
//int main(){
//	int i = 0;
//	for(i=1000; i<=2000; i++){
//		if((i % 4 == 0 && i % 100 != 0) || (i % 400 ==0)){
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//99乘法表
//int main(){
//	int i = 0;
//	for(i = 1; i <= 9;i++){
//		int j = 0;
//		for(j = 1; j <= 9; j++){
//			printf("%d*%d=%2d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//三角形判断
//#include <stdio.h>
//int main() 
//{
//   int a = 0;
//   int b = 0;
//   int c = 0;
//   while(scanf("%d %d %d",&a,&b,&c) == 3)
//   {
//       if((a+b>c) && (a+c>b) &&(b+c>a))
//       {
//           if(a==b && b==c)
//           {
//               printf("Equilateral triangle!\n");
//           }
//           else if((a==b && b!=c)||(a==c && c!=b)||(b==c && b!=a))
//           {
//               printf("Isosceles triangle!\n");
//           }
//           else
//           {
//               printf("Ordinary triangle!\n");
//           }
//       }
//       else
//       {
//           printf("Not a triangle!\n");
//       }
//   }
//    return 0;
//}

//1到100的所有9
//int main(){
//	int i = 0;
//	int count = 0;
//	for(i = 1; i <= 100; i++){
//		if(i / 10 == 9 || i % 10 == 9){
//			printf("%d\n",i);
//			count++;
//		}
//	}
//	printf("\n%d",count);
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//int main(){
//	int a = 0;
//	    int b = 0;
//	    double c = 0;
//	    double d = 0;
//	    
//	    for (a = 1; a <= 100; a++)
//	    {
//	        c = 1.0 / a;
//	        b++;
//	        if (b % 2 == 0)
//	            d -= c;
//	        else
//	            d += c;
//	    }
//	   
//	    printf("最终值为：%lf\n", d);
//	return 0;
//}