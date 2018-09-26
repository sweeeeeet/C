#include<stdio.h >
int main( ){
	int i = 1,d = 1,cf=0;
	for (i = 1; i<10; i++){
		for (d = 1; d <= i; d++){
			cf = i*d;

			printf("%d*%d=%d\t", i,d,cf);
		}
		printf("\n");
	}
	system ("pause");
	
}
