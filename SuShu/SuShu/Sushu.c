#include<stdio.h>
int main( ){
	int i = 100;
	while (i <= 200){
		int d = 2;
		while (d != i - 1){
			
			int r = i%d;
			if (r == 0){
				printf("%d不是素数\n", i);
				break;
			}
			else{
				printf("%d是素数\n",i);
				break;
			}
			d += 1;
		}
		i++;
	}
	system("pause");
}