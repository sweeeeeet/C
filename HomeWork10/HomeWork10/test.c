//1.
//дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ�� 
//}
//

//int main(){
//	int i = 2.5;
//	float j = 2.5;
//	j--;
//	
//	printf("%f", j/i);
//	system("pause");
//	return 0;
//}
//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
//
//3. ���һ��������ÿһλ��
//
//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
//
//	   5.д�����ܽ�C���Բ��������������ӷ����ң�������Ⱥ�


//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
//#include<stdio.h>
//#include<stdlib.h>
//unsigned int reverse_bit(unsigned int value){
//	unsigned int sum = 0;
//	for (int i = 0; i < 32; i++){
//
//		sum += ((value >> i) & 1) << (31 - i);
//	}
//	return sum;
//
//
//}
//int main(){
//	unsigned int num = 25;
//	printf("%u\n", reverse_bit(num));
//	system("pause");
//	return 0;
//
//}

//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//
//
//	int a = 12;
//	int b = 6;
//	int aver = (a + b) >> 1;
//	printf("%d\n", aver);
//	system("pause");
//	return 0;
//}
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
//
//#include<stdio.h>
//#include<stdlib.h>
//????/*�ҳ������������ͽ������е�ÿ����ȫ��ȡ������㣬
//???�磺arr[1]={1,3,3,1,4}
//   01^11=10������������10^11=01,
//   01^01=00,000^100=100=4
//   �����������Ϊ1
//   ��1��a=a^b????c^a�൱��c^(a^b)
//   ��2���Լ�����Լ������൱��û����򣬻����Լ���*/
//int main(){
//	int i = 0;
//
//	int arr[] = { 2, 5, 5, 9, 8, 9, 8 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i<len; i++)
//	{
//		arr[0] = arr[0] ^ arr[i];
//	}
//	printf("%d\n", arr[0]);
//	system("pause");
//	return 0;
//}
//4.
//��һ���ַ����������Ϊ:"student a am i",
//			���㽫��������ݸ�Ϊ"i am a student".
//			Ҫ��
//			����ʹ�ÿ⺯����
//			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
//
//			student a am i
//			i ma a tneduts
//			i am a student
//
//#include<stdio.h>
//#include<stdlib.h>
//void reverse_word(char arr[]);
//
//void reverse(char* left, char* right){
//	while (left < right){
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//
//
//}
//void reverse_str(char arr[]){
//	int left = 0;
//	int right = 0;
//	
//	
//	while (1){
//		if (arr[right] == '\0'){
//			break;
//		}
//		else{
//
//		++right;
//		}
//		
//	}	
//	reverse(arr, arr+right-1);
//	reverse_word(arr);
//}
//void reverse_word(char arr[]){
//	int len = 0;
//	int left = 0;
//	int right = 0;
//	
//	while (arr[len] != '\0'){
//
//		++len;
//	}
//	int last_right = len-1;
//	while (len){
//		//i am a student
//			left = last_right;
//		if (arr[len] == ' '){
//			right = len+1;
//			reverse(arr+right, arr+left);
//			last_right = right-2;
//		}
//
//	len--;
//	}
//
//}
//int main(){
//
//	char arr1[] = {"student a am i"};
//	char arr2[] = { "i ma a tneduts" };
//	reverse_str(arr1);
//	printf("%s\n", arr1);
//	reverse_word(arr2);
//	printf("%s\n", arr2);
//
//	system("pause");
//	return 0;
//}
////1.
////5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
////Aѡ��˵��B�ڶ����ҵ�����
////Bѡ��˵���ҵڶ���E���ģ�
////Cѡ��˵���ҵ�һ��D�ڶ���
////Dѡ��˵��C����ҵ�����
////Eѡ��˵���ҵ��ģ�A��һ��
////����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//int main(){
//	for (int A = 1; A < 6;	A++){
//		for (int B = 1; B < 6; B++){
//			for (int C = 1; C < 6; C++){
//				for (int D = 1; D < 6; D++){
//					for (int E = 1; E < 6; E++){
//						if ((B == 2 && A != 3) ||
//							(B != 2 && A == 3) == 1){
//							if ((B != 2 && E == 4) ||
//                            (B == 2 && E != 4) == 1){
//								if ((C == 1 && D != 2) ||
//									(C != 1 && D == 2) == 1){
//									if ((C == 5 && D != 3) ||
//										(C != 5 && D == 3) == 1){
//										if ((E == 4 && A != 1) ||
//											(E != 4 && A == 1) == 1){
//											if (A!=B&&A!=C&&A!=D&&A!=E
//												&&B!=C&&B!=D&&B!=E
//												&&C!=D&&C!=E
//												&&D!=E)
//											printf("���ǵ����ηֱ��ǣ�A:%d,B:%d,C:%d,D:%d,E:%d\n", A, B, C, D, E);
//										}
//									}
//								}
//							}
//						}
//								
//	
//	
//	
//	
//					}
//
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
////2.
////�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
////���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
////A˵�������ҡ�
////B˵����C��
////C˵����D��
////D˵��C�ں�˵
////��֪3����˵���滰��1����˵���Ǽٻ���
////�����������Щ��Ϣ��дһ��������ȷ������˭������
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	for (int a = 0; a < 2; a++){
//		for (int b = 0; b < 2; b++){
//			for (int c = 0; c < 2; c++){
//				for (int d = 0; d < 2; d++){
//					if ((a == 0 && c == 1 && d == 1) ||
//						(a == 0 && c == 1 && d == 0) == 1){
//						if ((a == 1 && b == 0 && c == 0 && d == 0)||
//							(a == 0 && b == 1 && c == 0 && d == 0)||
//							(a == 0 && b == 0 && c == 1 && d == 0)||
//							(a == 0 && b == 0 && c == 0 && d == 1)==1){
//							
//							printf("������ֵΪ1����a:%d,b%d,c:%d,d:%d\n", a, b, c, d);
//						}
//					}
//						
//				}
//			}
//		}
//
//	}
//	system("pause");
//	return 0;
//}



	//3.����Ļ�ϴ�ӡ������ǡ�
	//1  num1 0
	//1 1 num1 up+left
	//1 2 1num1 up+left+num1
	//1 3 3 1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[100][100] = { 1 };
	int input = 0;
	
	for (int row = 1; row <= 100; row++){
		for (int col = 0; col <= row; col++){
			if (col == 0){
				arr[row][col] = 1;
			}
			else if (row == col){
				arr[col][col] = 1;
			}
			else{

			arr[row][col] = arr[row - 1][col]
				+ arr[row - 1][col - 1];
			}
			
		}
		
	}
	
	
	printf("�������ӡ��������ǵ�������\n");
	scanf("%d", &input);
	for (int row = 0; row <= input; row++){
		for (int col = 0; col <= row; col++){
			printf("%5d", arr[row][col]);
		}
		printf("\n");
	}
	



	system("pause");
	return 0;
}





