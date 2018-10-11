#include<stdio.h>
#include<stdlib.h>
//¿Õ¸ñÊý7-i
//*Êý 2i-1
void PrintLingXing(int i,int n){
	for (int i = 0; i < n; i++)
	{
		printf(" ");
	}
	for (int i = 0; i < n; i++)
	{
		printf("*");
	}
	printf("\n");


}
int main(){
	PrintLingXing(6, 7);
	system("pause");
	return 0;
}