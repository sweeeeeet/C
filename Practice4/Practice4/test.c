#include<stdio.h>
#include<stdlib.h>
//�ո���7-i
//*�� 2i-1
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