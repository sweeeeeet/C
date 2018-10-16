#include<stdio.h>
#include<stdlib.h>

////2. º∆À„ 1!+ 2!+ 3!+ °≠°≠ + 10!


int Factor_sum(int n){
	
	
	if (n == 1){
		return 1;
		
	}
	else{
		return n*Factor_sum(n - 1);
	}

}

int main(){
	int sum = 0;
	for (int i = 1; i < 11; i++){
		sum+= Factor_sum(i);
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}







//int Factor(int n){
//	int temp = 1;
//	int i = 0;
//	
//	for (i = 1; i < n; n--){
//		temp *= n;
//		
//	}
//	return temp;
//}
//int main(){
//	int sum = 0;
//	int n = 3;
//	while (n>0){
//
//	sum += Factor(n);
//	n--;
//	}
//	printf("%d\n", sum);
//
//	system("pause");
//	return 0;
//}


//int main(){
//	char arr1[] = "welcome to bit!!";
//	char arr2[] = "################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	while (left <= right){
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	system("pause");
//	return 0;
//
//}
//int main(){
//	int m = 2;
//	int n = 2;
//	switch (n){
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (m){
//		case 1:
//			m++;
//		case 2 :
//			n++;
//		default:
//
//			printf("please input others");
//		}
//
//		printf("%d\n", n);
//
//	}
//
//
//
//	system("pause");
//	return 0;
//}

