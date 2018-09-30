#include<stdio.h>
#include<stdlib.h>
int main(){
	int a1 = 0;
	int a2 = 0;
	int a3 = 0;
	int a4 = 0;
	int a5 = 0;
	int i = 0;
	for (i = 1; i < 10; i++){
		a1 = i;
		a2 = i + i * 10;
		a3 = i + i * 10 + i * 100;
		a4 = i + i * 10 + i * 100 + i * 1000;
		a5 = i + i * 10 + i * 100 + i * 1000 + i * 10000;
		printf("%d\n", a1 + a2 + a3 + a4 + a5);
	}
	system("pause");
	return 0;
}