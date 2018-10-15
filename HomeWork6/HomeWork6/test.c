#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int r = 0;
void Digui_print(int n){
	r = n % 10;
	printf("%d\n", r);
	if (n > 10){
	
		Digui_print(n/10);

	}
	
		
	}


int main(){
	Digui_print(1234);
	system("pause");
	return 0;
}
//
////6.递归和非递归分别实现求n的阶乘
//	
//int Diui(int n){
//	
//	if (n == 1){
//		return 1;
//	}
//	else {
//
//		return n*Diui(n - 1);
//		
//	}
//
//}
//
//int NOdigui(int n){
//	int r = 1;
//	for (int i = 1; i < n; ){
//		r *= n;
//		n--;
//	}
//	return r;
//}
//
//
//int main(){
//	int input = 0;
//	scanf("%d", &input);
//	printf("%d\n", Diui(input));
//	printf("%d\n", NOdigui(input));
//	system("pause");
//	return 0;
//}







////5.递归和非递归分别实现strlen
//int count = 0;
//int Digui(char* string)
//{
//
//
//		++count;
//	if (*string == '\0'){
//		return count-1;
//	}
//	else{
//		Digui(string + 1);
//	}
//
//}
//		int length = 0;
//int NoDigui(){
//	char arr[] = "nihao";
//		length = sizeof(arr) / sizeof(arr[0]) - 1;
//		return length;
//}
//int main(){
//	
//
//	printf("%d\n", NoDigui());
//
//	printf("%d\n", Digui("ni shi shei"));
//	system("pause");
//	return 0;
//}









////. 编写一个函数 reverse_string(char * string)（递归实现）
////实现：将参数字符串中的字符反向排列。
////要求：不能使用c函数库中的字符串操作函数。
//char temp = null;
//char reverse_string(char * string){
//
//
//	if (*string == '\0'){
//		
//	printf("%s\t", *string);
//	
//	}
//	else{
//		reverse_string(string+1);
//	}
//	printf("%c\n", *string);
//
//}
//	
//
//
//
//int main(){
//	char arr[] = "this is string!";
//	reverse_string(arr);
//	system("pause");
//	return 0;
//}









////3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
////例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
////1.逐个输出2.相加
//
//int sum=0;
//int temp=0;
//int DigitSum(int n){
//	sum += (n % 10);
//
//	if (n > 10){
//
//	DigitSum(n / 10);
//	return sum;
//	}
//}
//	
//
//int main(){
//	printf("输入一个数字\n");
//	int input = 0;
//	scanf("%d", &input);
//	printf("%d\n", DigitSum(input));
//
//	system("pause");
//	return 0;
//}

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
////1.递归和非递归分别实现求第n个斐波那契数。 
//
//
//	printf("递归：%d\n", recursion_fib(14));
//	printf("非递归:%d\n", norecursion_fib(14));
//
//	system("pause");
//	return 0;
//
//}
//
