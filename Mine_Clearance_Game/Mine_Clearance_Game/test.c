#define _CRT_SECURE_NO_WARNINGS
#define ROW 9
#define COL 9
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int input = -1;


void Init(char mine_map[ROW + 2][COL + 2],
 char show_map[ROW + 2][COL + 2]){

	//1.��ʼ����ͼ ��������
	int count = 0;
	memset(mine_map, '0', (ROW + 2)*(COL + 2));
	memset(show_map, '*', (ROW + 2)*(COL + 2));
	srand(time(NULL)); 
	while (1){
		int col = rand() % COL + 1;
		int row = rand() % ROW + 1;
		if (mine_map[row][col] = '0'){
			mine_map[row][col] = '1';
			count++;
		}
		if (count == 9)
			break;
	}
}
void Display_show_map(char show_map[ROW + 2][COL + 2],
	int row,int col){
	
	printf("   ");
	for (int i = 1; i <= ROW; i++){
		printf(" %d ", i);
	}
	printf("\n-------------------------------\n");
	for (int row = 1; row <= ROW; row++){
		printf("%2d|", row);
		for (int col = 1; col <= COL; col++){
			printf(" %c ", show_map[row][col]);
		}
		printf("\n");
	}
	}


void Display_mine_map(char mine_map[ROW+2][COL+2]){
	printf("   ");
	for (int i = 1; i <= ROW; i++){
		printf(" %d ", i);
	}
	printf("\n--------------------------\n");
	for (int row = 1; row <= ROW; row++){
		printf("%2d|", row);
		for (int col = 1; col <= COL; col++){
			printf(" %c ", mine_map[row][col]);
		}
		printf("\n");
	}

}

char UpdateMine(char show_map[ROW + 2][COL + 2], 
	char mine_map[ROW + 2][COL + 2],
	int row, int col){

	int count = (mine_map[row - 1][col - 1] - '0') +
		(mine_map[row - 1][col] - '0') +
		(mine_map[row - 1][col + 1] - '0') +
		(mine_map[row + 1][col - 1] - '0') +
		(mine_map[row + 1][col] - '0') +
		(mine_map[row + 1][col + 1] - '0') +
		(mine_map[row][col + 1] - '0') +
		(mine_map[row][col - 1] - '0');
	show_map[row][col] = '0' + count;
	
}


void Game(){
	int not_mine_count = 0;
	char mine_map[ROW + 2][COL + 2] = { 0 };
	char show_map[ROW + 2][COL + 2] = { 0 };

	int row = -1;
	int col = -1;
	//1.��ʼ����ͼ ��������
	Init(mine_map, show_map);
	while (1){
	//2.��ӡshow_map
		Display_show_map(show_map,row,col);

	//3.��ʾ�û���������
		printf("����������(row col):\n");
		scanf("%d %d", &row,&col);
		if (row >= 1 && row <= ROW&&col >= 1 && col <= COL){
	//4.���û���������ж�
			if (mine_map[row][col] == '1'){
	//5.�ж�����Ƿ���� ���������Ϸ������ӡ����
				printf("��Ϸʧ��\n");
				Display_mine_map(mine_map);
				break;
			}
			else{
				//6.��û��,�ж�����Ƿ�ʤ��
				//(��ҷ����ķ���=ROW*COL-����)
				++not_mine_count;
				
				if (not_mine_count==ROW*COL-9){
					printf("��Ϸʤ��!\n");
					break;
				}
				else{
//7.��û��ʤ��,ͳ�Ƶ�ǰ���鸽���м����״�ӡshow_map�ص�������					
			
	  UpdateMine(show_map,mine_map, row, col);
		Display_show_map(show_map, row, col);

				}
			}
			
		}
	}

}

void StartGame(){
	printf("**************\n");
	printf("1.��ʼ��Ϸ\n");
	printf("2.�˳���Ϸ\n");
	printf("**************\n");
	printf("�������Ӧ����:\n");
	scanf("%d", &input);
	if (input == 1){
		Game();
	}
	else if (input == 2)
	{
		printf("��Ϸ����!\n");
		exit(0);
	}
	else{
		printf("�������,������!!\n");
		StartGame();
	}
}
int main(){
	//1.����������ά����mine_map show_map
	//2.min_map����'0'��ʾ���ǵ��� ��'1'��ʾ�ǵ���
	//3.show_map����'*'��ʾδ�򿪵ķ��� �����ֱ�ʾ�Ѵ򿪷�����Χ����
	while (1)
	{

	StartGame();
	}
	
	system("pause");
	return 0;
}