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
			printf("��������ת������ĸ\n");
		while (1){
			scanf("%c", &input);
			if ((input > 64 && input<91)){

				printf("%c��Сд��ĸ��%c\n", input, (input + 32));
				continue;
			}
			else if (input>96 && input < 123){

				printf("%c�Ĵ�д��ĸ��%c\n", input, (input - 32));
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
//		printf("����������\n");
//		scanf("%d", &num);
//		if (num > key){
//			printf("�´���\n");
//		}
//		else if (num < key){
//
//			printf("��С��\n");
//
//		}
//		else{
//		printf("�¶���~~\n");
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
//			printf("�����������������\n");
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
