//1.
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
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
//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
//
//3. 输出一个整数的每一位。
//
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
//
//	   5.写博客总结C语言操作符，博客链接发给我，并分享到群里。


//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
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

//2.不使用（a + b） / 2这种方式，求两个数的平均值。
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
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//
//#include<stdio.h>
//#include<stdlib.h>
//????/*找出单独的数，就将数组中的每个数全都取异或运算，
//???如：arr[1]={1,3,3,1,4}
//   01^11=10，再用这个结果10^11=01,
//   01^01=00,000^100=100=4
//   独的数结果就为1
//   （1）a=a^b????c^a相当于c^(a^b)
//   （2）自己异或自己两次相当于没有异或，还是自己。*/
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
//有一个字符数组的内容为:"student a am i",
//			请你将数组的内容改为"i am a student".
//			要求：
//			不能使用库函数。
//			只能开辟有限个空间（空间个数和字符串的长度无关）。
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
////5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
////A选手说：B第二，我第三；
////B选手说：我第二，E第四；
////C选手说：我第一，D第二；
////D选手说：C最后，我第三；
////E选手说：我第四，A第一；
////比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
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
//											printf("他们的名次分别是：A:%d,B:%d,C:%d,D:%d,E:%d\n", A, B, C, D, E);
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
////日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
////嫌疑犯的一个。以下为4个嫌疑犯的供词。
////A说：不是我。
////B说：是C。
////C说：是D。
////D说：C在胡说
////已知3个人说了真话，1个人说的是假话。
////现在请根据这些信息，写一个程序来确定到底谁是凶手
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
//							printf("凶手是值为1的人a:%d,b%d,c:%d,d:%d\n", a, b, c, d);
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



	//3.在屏幕上打印杨辉三角。
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
	
	
	printf("输入需打印的杨辉三角的行数：\n");
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





