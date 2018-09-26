#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){

	int a, b, num1, num2, temp;
	printf("please input num1 and num2: ");
	scanf("%d %d", &num1, &num2);
	if (num1 >= num2)
	{
		a = num1;
		b = num2;
	}
	if (num1 < num2)
	{
		a = num2;
		b = num1;
	}
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	printf("最大公约数是%d\n", a);
	
	system("pause");
	return 0;
}








//int main(){
//	int a[3], i = 0,k=0,temp=0;
//	for (i = 0; i < 3; i++){
//		scanf("%d", &a[i]);
//	}
//
//              for(i = 0; i < 3; i++){
//				for (int k = i + 1; k < 3; k++){
//					if (a[i] < a[k]){
//						temp = a[i];
//						a[i] = a[k];
//						a[k] = temp;
//	
//					}
//				}
//	
//			}
//			  for (i = 0; i < 3; i++){
//				  printf("%d ", a[i]);
//			  }
//			  system("pause");
//}







////求十个整数中的最大值
//int main(){
//
//			int a[10],i=0,k=0,temp = 0;
//	printf("输入十个整数\n");
//	
//	while (i < 10){
//		scanf("%d", &a[i]);
//		i++;
//	}
//
//
//		for (i = 0; i < 10; i++){
//			for (int k = i + 1; k < 10; k++){
//				if (a[i] < a[k]){
//					temp = a[k];
//
//				}
//			}
//
//		}
//	
//	printf("最大的数是%d", temp);
//	
//	system("pause");
//}

//int exchange(int x,int y){
//	printf("第一个数是:%d\t第二个数是%d\n", x, y);
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//	printf("第一个数是:%d\t第二个数是%d\n", x, y);
//	return 0;
//
//}
//int main(){
//	int a = 0;
//	int b = 0;
//	printf("输入两个不同的整数:\n");
//	scanf("%d %d", &a, &b);
//	exchange(a, b);
//	system("pause");
//	return 0;
//}
//












