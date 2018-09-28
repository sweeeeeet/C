//1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大） 
//2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
//3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。

#include<stdio.h>
#include<stdlib.h>

int main(){
	int i = 0;
	int sum = 0;
	for (i = 1; i < 101; i++){
		if ((i - 9) % 10 == 0){
			sum += 1;
		}
	}
	printf("%d", sum);
	system("pause");
	return 0;
}

//int main(){
//
//	int a[100];
//	int b[100];
//	int c[100];
//	int i = 0;
//	for (int i = 0; i < 100; i++){
//		a[i ] = i;
//
//		printf("%d\t", a[i]);
//
//		if ((i+1) % 10 == 0){
//
//			printf("\n");
//		}
//	}
//	for (int j = 101, i = 0; j < 201, i < 100; i++, j++){
//		b[i ] = j;
//		printf("%d\t", b[i]);
//		if ((i + 1) % 10 == 0){
//
//			printf("\n");
//		}
//	}
//	for (int i = 0; i < 100; i++){
//		c[i] = a[i];
//		a[i] = b[i];
//		b[i] = c[i];
//		printf("%d\t", b[i]);
//		if ((i+1) % 10 == 0){
//			printf("\n");
//		}
//	}
//	system("pause");
//
//}