#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//
//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
//11101
void fun(unsigned int value)
{
	int count = 0;
	char odd[102] = { 0 };
	char even[102] = { 0 };
	// ���� 1��λ�� 
	while (value != 0){

		if (count / 2 == 0){
		snprintf(even, "%d\n", value%2);

		}
		else if (count / 2 == 1){

			snprintf(odd, "%d \n", value % 2);

		}
		
		++count;
		value = value / 2;
	}
	
	printf("%s\n", odd);
}
int main(){
	fun(15);
	system("pause");
	return 0;
}

//3. ���һ��������ÿһλ��
//
//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
////1.
////дһ���������ز����������� 1 �ĸ���
////���磺 15 0000 1111 4 �� 1
////����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//			int count = 0;
//			int one = 0;
//	// ���� 1��λ�� 
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

//////ð�ݷ�
//void swap(int* x, int* y){
//
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//void Bubble(int arr[],int size){
//	int bound = 0;
//	int temp = 0;
//	//[0,bound]���ź��������
//	//[bound,size-1]δ����
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
//
//
//
//
//
//
//
//
//
//
//



















////�ո���7-i
////*�� 2i-1
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