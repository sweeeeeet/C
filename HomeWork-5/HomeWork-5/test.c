#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 25, 47 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[1]) - 1;
	int mid = 0;
	int key = 9;
	while (left <= right){
		mid = (left + right) / 2;
		if (arr[mid]>key){
			
			--mid;
			right = mid;
		}
		else if (arr[mid] < key){
		
			++mid;
			left = mid;
		}
		else if (arr[mid] = key){
			printf("find it!operator is %d ",mid);
			break;
		}
		else{
			return -1;
		}
	}

	system("pause");
	return 0;
}






//int main(){
//	int i = 0;
//	char password[] = "123456";
//	char user[10];
//	for (i = 0; i < 3; i++){
//		printf("ÇëÊäÈëÃÜÂë£º\n");
//		scanf("%s", &user);
//		if (strcmp(password,user) == 0){
//			printf("ÃÜÂëÕýÈ·\n");
//				break;
//		}
//		else{
//			printf("ÊäÈë´íÎóÇëÖØÊÔ£¡£¡\n");
//		}
//		if (i == 3){
//			printf("exit!");
//		}
//		
//	}
//
//	system("pause");
//	return 0;
//}