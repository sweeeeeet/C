#include<stdio.h>
int main(){
	int year = 1000;
	while (year <= 2000){
		if (year % 400 == 0){

			printf("%d������\n", year);
		}
		else if (year % 4 == 0 && year % 100 != 0){
			printf("%d������\n", year);
		}
		else
		{
			printf("%d��������\n", year);
		}
	year=year+1;
	}
	system("pause");
}