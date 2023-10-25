//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//判断两者大小
//	if (a >= b)
//	{
//		//将较大值模上较小值得出来的值赋给c
//		int c = a % b;
//		//判断c是否为0
//		while (c != 0)
//		{
//			//将原较大值，原较小值分别赋值
//			a = b;
//			b = c;
//			//将较大值模上较小值得出来的值赋给c
//			c = a % b;
//		}
//		printf("最大公约数为：%d", b);
//	}
//	else
//	{
//		int d = b % a;
//		while (d != 0)
//		{
//			b = a;
//			a = d;
//			d = b % a;
//		}
//		printf("最大公约数为：%d", a);
//	}
//	return 0;
//}
//
//void play(){
//		int ret = rand() % 100 + 1;
//		int p = 0;
//		while(1){
//			printf("请猜数字:>");
//			scanf("%d",&p);
//			if(p < ret){
//				printf("猜小了\n");
//			}else if(p > ret){
//				printf("猜大了\n");
//			}else{
//				printf("恭喜你，猜对了\n");
//				break;
//			}
//		}
//	}
//	void shuchu(){
//		printf("***************\n");
//		printf("****1.play*****\n");
//		printf("****2.exit*****\n");
//		printf("***************\n");
//	}
//
//int main(){
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do{
//		shuchu();
//		printf("请选择:>");
//		scanf("%d",&input);
//		switch (input) {
//			case 1:
//				printf("开始游戏\n");
//				play();
//				break;
//			case 2:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("输入错误\n");
//				break;
//		}
//	}while(input);	
//	return 0;
//}
//
//int main(){
//	int i = 0;
//	int count = 0;
//	for(i = 100; i <= 200; i++){
//		int j = 0;
//		int flag = 1;
//		for(j = 2; j < i; j++){
//			if(i % j == 0){
//				flag = 0;
//				break;
//			}
//		}
//		if(flag == 1){
//			count++;
//			printf("%d ",i);
//		}
//	}
//	printf("\ncount = %d",count);
//	return 0;
//}