#include<stdio.h>
#include<stdlib.h>

//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//1.������2.���


int DigitSum(int n){

		int sum = 0;
	if (n < 9){
		n = n % 10;
			sum += n;

	}
	else{

	DigitSum(n / 10);
	}
	return sum;
}

int main(){
	printf("%d\n", DigitSum(1729));

	system("pause");
	return 0;
}

//
//int rcs_pow(int num,int k){
//	
//	if (k < 2){
//
//    return num;
//	}
//	else{
//		return num *= rcs_pow(num,k - 1);
//	}
//	
//
//}
//
//int main(){
//
//
//	printf("%d\n", rcs_pow(5,5));
//	system("pause");
//	return 0;
//}






//int norecursion_fib(int n){
//	int i = 0;
//	int f_1 = 1;
//	int f_2 = 1;
//	int r = 0;
//	if (n<3){
//		return 1;
//	}
//	for (i = 3; i <= n; i++){
//		r = f_1 + f_2;
//		f_1 = f_2;
//		f_2 = r;
//	}
//	return r;
//}
//
//
//int recursion_fib(int n){
//	
//	if (n < 3){
//		return 1;
//	}
//	else{
//
//		 return recursion_fib(n - 2) + recursion_fib(n - 1);
//	
//		
//	}
//
//}
//int main(){
////1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲��������� 
//
//
//	printf("�ݹ飺%d\n", recursion_fib(14));
//	printf("�ǵݹ�:%d\n", norecursion_fib(14));
//
//	system("pause");
//	return 0;
//
//}
//
