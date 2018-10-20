//
//#include<stdio.h>
//#include<stdlib.h>
////
////2.获取一个数二进制序列中所有的偶数位和奇数位，
////分别输出二进制序列。
////14
////1101
//void fun(unsigned int value)
//{
//	int count = 0;
//	int index=0;
//	int odd[102] = { 0 };
//	int even[102] = { 0 };
//	// 返回 1的位数 
//	while (value != 0){
//
//		if (count / 2 == 0){
//			even[index] = value % 2;
//
//		}
//		else if (count / 2 == 1){
//			odd[index] = value % 2;
//		}
//		--index;
//		++count;
//		value = value / 2;
//	}
//	while (odd[index] != NULL){
//
//		printf("%d", odd[index]);
//
//		index++;
//	}
//	
//}
//int main(){
//	fun(13);
//	system("pause");
//	return 0;
//}

//3. 输出一个整数的每一位。
//
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
////1.
////写一个函数返回参数二进制中 1 的个数
////比如： 15 0000 1111 4 个 1
////程序原型：
//int count_one_bits(unsigned int value)
//{
//			int count = 0;
//			int one = 0;
//	// 返回 1的位数 
//	while (value!=0){
//	
//		one = value % 2;
//		if (one == 1){
//			++count;
//		}
//		value = value / 2;
//	}
//	return count;
//}
//int main(){
//	printf("%d\n",count_one_bits(15));
//	system("pause");
//	return 0;
//}

//////冒泡法
//void swap(int* x, int* y){
//
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//void Bubble(int arr[],int size){
//	int bound = 0;
//	int temp = 0;
//	//[0,bound]已排好序的区间
//	//[bound,size-1]未排序
//	for (; bound >0;--bound){
//		for (int cur = 0; bound<cur; ++cur){
//
//			if (arr[cur] > arr[cur +1])
//				swap(&arr[cur],&arr[cur+1]);
//	}
//	}
//
//	for (int cur = 0; cur < size; cur++){
//
//		printf("%d\n", arr[cur]);
//	}
//
//}
//int main(){
//
//	int arr[] = { 1, 5, 6, 2, 3, 4, 5, 9, 1 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", size);
//	Bubble(arr,size);
//}
#include<stdio.h>
#include<stdlib.h>
void swap(int* x,int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
void Bubble2(int arr[],int len){
	for (int i = 0; i < len; i++){
		for (int j = 0; j < len; j++){

			printf("%d", arr[j]);
		}
		printf("\n");
	}

}













void Bubble1(int arr[],int size){
	for (int bound = size; bound >0 ; bound--){
		for (int i = 0; i < bound; i++){
			if (arr[i] > arr[i + 1]){
				swap(&arr[i], &arr[i + 1]);

			}

		}
	}
	for (int j = 0; j < size; j++){
		printf("%d", arr[j]);
	}
	printf("\n");
}
int main(){
	int arr[] = { 9, 5, 1, 2, 6, 7, 9, 8 };
	int len = sizeof(arr)/sizeof(arr[0])-1;
	Bubble1(arr,len);
	Bubble2(arr, len);
	system("pause");
	return 0;
}

















////空格数7-i
////*数 2i-1
//void PrintLingXing(int i,int n){
//	for (int i = 0; i < n; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//
//}
//int main(){
//	PrintLingXing(6, 7);
//	system("pause");
//	return 0;
//}