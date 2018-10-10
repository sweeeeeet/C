#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main(){
	int i = 3;
	char psw[] = "123456";
	char pass[6];
	
	for (i = 0; i < 3; i++){
		printf("请输入密码\n");
	scanf("%s", pass);
		if (strcmp(pass,psw)==0){
			printf("输入正确\n");
			break;
		}
		else{
			printf("请重新输入\n");
		}
	
	}
	

	system("pause");
	return 0;
}