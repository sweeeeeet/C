//#include<stdio.h>
//#include<stdlib.h>
////
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
////2.��ȡһ�������������������е�ż��λ������λ��
////�ֱ�������������С�
////18
////100011
////101 001
//
//void print_num(unsigned value)
//{
//	int count = 0;//��������� λ��
//	int a[32] = { 0 };
//	int i = 0;
//	while (value) {
//		a[i++] = value % 2;
//		value /= 2;
//		count++;
//	}
//	printf("��������\n");
//	for (i = count; i >= 0; i -= 2) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	printf("ż������\n");
//	for (i = count - 1; i >= 0; i -= 2) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	printf("��ȡһ�������������������е�ż��λ������λ,�ֱ��������������(��������01011)\n");
//	int value = 11;//01011
//	print_num(value);
//	system("pause");
//	return 0;
//}
//3. ���һ��������ÿһλ��
//#include<stdio.h>
//#include<stdlib.h>
//
//void Print_num(int value){
//	int arr[32] = { 0 };
//	int count = 0;
//	while (value){
//		arr[count++]=value % 10;
//		value /= 10;
//	}
//	for (int i = count-1; i >= 0; i--){
//
//		printf("%d\t", arr[i]);
//	}
//}
//int main(){
//	Print_num(4568);
//	system("pause");
//	return 0;
////}
//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7    
#include<stdio.h>
#include<stdlib.h>
int Bit_Diff(int m, int n){
	int i = 0;
	int m_bit[32] = { 0 };
	int count_m = 0;
	int n_bit[32] = { 0 };
	int count_n = 0;
	int count = 0;
	while (m){
		m_bit[count_m++] = m % 2;
		m /= 2;
	}
	while (n){
		n_bit[count_n++] = n % 2;
		n /= 2;
	}

	for (int i = count_m; i >= 0; i--){

		printf("%d\t", m_bit[i]);
		
		

	}
		printf("\n");
	for (int j = count_n; j >= 0; j--){

		printf("%d\t", n_bit[j]);
	}
	while (1){
		
		
	if (m_bit[i] != n_bit[i]){
		count++;
	}
		
	if (i == count_m-1){
		 count += (count_n - count_m);

		break;
		}
		i++;
	}
	return count;
}

int main(){
	printf("%d",Bit_Diff(1999, 2299));
	system("pause");
	return 0;
}












