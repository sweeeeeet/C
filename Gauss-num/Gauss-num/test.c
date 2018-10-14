#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


void transverter();
	int main(){
		
		
		transverter();

		
		system("pause");
		return 0;
	
	}

	void transverter(){
		char input = ' ';
			printf("请输入需转换的字母\n");
		while (1){
			scanf("%c", &input);
			if ((input > 64 && input<91)){

				printf("%c的小写字母是%c\n", input, (input + 32));
				continue;
			}
			else if (input>96 && input < 123){

				printf("%c的大写字母是%c\n", input, (input - 32));
				continue;
			}
			else if (input>47&&input<58)
			{
				
				continue;
			}
			else
			{
				continue;
			}
		}
			return 0;
	}
	





//void menu(){
//	printf("****************************\n");
//	printf("**********1.start***********\n");
//	printf("**********2.exit************\n");
//	printf("****************************\n");
//}
//
//void guss_num(){
//	int num;
//	int key = rand() % 100 + 1;
//	while (1){
//		printf("请输入数字\n");
//		scanf("%d", &num);
//		if (num > key){
//			printf("猜大了\n");
//		}
//		else if (num < key){
//
//			printf("猜小了\n");
//
//		}
//		else{
//		printf("猜对啦~~\n");
//		break;
//		}
//	}
//}
//
//int main(){
//	int choose;
//	do{
//		menu();
//		scanf("%d", &choose);
//
//		switch (choose)
//		{
//		case 1:
//			guss_num();
//			break;
//		case 2:
//			exit(0);
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			menu();
//			break;
//		}
//	} while (choose);
//	
//	srand((unsigned)time(null));
//	
//	system("pause");
//	return 0;
//}
