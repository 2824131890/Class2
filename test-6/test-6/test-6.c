//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//�ж����ߴ�С
//	if (a >= b)
//	{
//		//���ϴ�ֵģ�Ͻ�Сֵ�ó�����ֵ����c
//		int c = a % b;
//		//�ж�c�Ƿ�Ϊ0
//		while (c != 0)
//		{
//			//��ԭ�ϴ�ֵ��ԭ��Сֵ�ֱ�ֵ
//			a = b;
//			b = c;
//			//���ϴ�ֵģ�Ͻ�Сֵ�ó�����ֵ����c
//			c = a % b;
//		}
//		printf("���Լ��Ϊ��%d", b);
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
//		printf("���Լ��Ϊ��%d", a);
//	}
//	return 0;
//}
//
//void play(){
//		int ret = rand() % 100 + 1;
//		int p = 0;
//		while(1){
//			printf("�������:>");
//			scanf("%d",&p);
//			if(p < ret){
//				printf("��С��\n");
//			}else if(p > ret){
//				printf("�´���\n");
//			}else{
//				printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��:>");
//		scanf("%d",&input);
//		switch (input) {
//			case 1:
//				printf("��ʼ��Ϸ\n");
//				play();
//				break;
//			case 2:
//				printf("�˳���Ϸ\n");
//				break;
//			default:
//				printf("�������\n");
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