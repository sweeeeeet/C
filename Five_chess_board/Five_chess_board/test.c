#define _CRT_SECURE_NO_WARNINGS
#define ROW 15
#define COL 15
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//1.�����ά�����ʾ����
char g_chess_board[ROW][COL];
int input_row = -1;
int input_col = -1;
void Init(){

	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			g_chess_board[row][col] = ' ';
		}
	}

	//2.�����̳�ʼ��


}
//3.��ӡ����
void print(){
	int row = 0;
	for (row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			if (col != COL - 1){
		printf("| %c ", g_chess_board[row][col]);
			}
			else{
				printf("| %c |\n", g_chess_board[row][col]);

			}

		}
		
		
		for (int i = 0; i < ROW; i++){
			
			printf("|---");
		
		}
		printf("\n");
		
		}
		
	}

int IsFull(){
	//���˷���1 û������0
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			if (g_chess_board[row][col] == ' ')
				return 0;


		}
		return 1;

	}
}
void PlayerMove(){
	//4.������ӣ������Ϸ�Ƿ����
	// a��ʾ�������
	//  b�����������
	//  c��������벻�Ϸ���ʾ�����������
	//  d.���Ϸ� ��ֵ
	
	while (1){
		printf("��������ӣ�����������������row col��\n");
		scanf("%d%d", &input_row, &input_col);
		if (input_col > COL || input_col<0 || input_row>ROW || input_row < 0){

			printf("�������̷�Χ����������~~\n");
			continue;
		}
		else if (g_chess_board[input_row][input_col] != ' '){
		
			printf("��ǰ������ӣ������£�\n");
			continue;
		}
		else if (g_chess_board[input_row][input_col] == ' '){
				g_chess_board[input_row][input_col] = 'x';
			break;
		}
	}
}
void ComouterMove(){
	//5.�������ӣ������Ϸ�Ƿ����
	while (1){

		int input_row = rand() % ROW;
		int input_col = rand() % COL;

		if (g_chess_board[input_row][input_col] == ' '){

			g_chess_board[input_row][input_col] = 'o';
			break;
		}

	}

}
char CheckWinner(){
	   
	   
	//������Ƿ�������
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){

			if (g_chess_board[row][col] == g_chess_board[row][col + 1]
				&& g_chess_board[row][col] == g_chess_board[row][col + 2]
				&& g_chess_board[row][col] == g_chess_board[row][col - 1]
				&& g_chess_board[row][col] == g_chess_board[row][col - 2]
				&& g_chess_board[row][col] != ' ')
				return g_chess_board[row][col];

		}
	}

	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			if (g_chess_board[row][col] == g_chess_board[row + 1][col]
				&& g_chess_board[row][col] == g_chess_board[row + 2][col]
				&& g_chess_board[row][col] == g_chess_board[row - 1][col]
				&& g_chess_board[row][col] == g_chess_board[row - 2][col]
				&& g_chess_board[row][col] != ' ')
				return g_chess_board[row][col];
		}
	}
	

	
//���k=-1/2ʱ �Ƿ�������
	
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			if (g_chess_board[row][col] == g_chess_board[row - 1][col - 1]
				&& g_chess_board[row][col] == g_chess_board[row - 2][col - 2]
				&& g_chess_board[row][col] == g_chess_board[row + 1][col + 1]
				&& g_chess_board[row][col] == g_chess_board[row + 2][col + 2]
				&& g_chess_board[row][col] != ' ')
				return g_chess_board[row][col];
		}
	}
	//���k=1/2ʱ �Ƿ�������
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			if (g_chess_board[row][col] == g_chess_board[row - 1][col + 1]
				&& g_chess_board[row][col] == g_chess_board[row - 2][col + 2]
				&& g_chess_board[row][col] == g_chess_board[row + 1][col - 1]
				&& g_chess_board[row][col] == g_chess_board[row + 2][col - 2]
				&& g_chess_board[row][col] != ' ')
				return g_chess_board[row][col];
		}
	}

	if (IsFull()){
		return 'q';
	}
	else
		return ' ';
	//1.����x��ʾ���ʤ��
	//2.����o��ʾ����ʤ��
	//3.����q��ʾ����
	//4.���ء� ����ʾ��Ϸ����
}
int main(){
	char winner = ' ';


	Init();
	while (1){
		print();

		PlayerMove();
		winner = CheckWinner();
		if (winner != ' '){
			break;
		}
		ComouterMove();
		winner = CheckWinner();
		if (winner != ' '){
			break;
		}

	}


	if (winner == 'x'){
		print();
		printf("���ʤ����\n");
	}
	else if (winner == 'o'){

		printf("����ʤ��!\n");
	}
	else if (winner == 'q'){
		printf("����\n");
	}

	system("pause");
	return 0;
}
