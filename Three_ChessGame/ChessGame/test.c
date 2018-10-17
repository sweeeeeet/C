#define ROW 3
#define _CRT_SECURE_NO_WARNINGS
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
	//1.�����ά�����ʾ����
char g_chess_board[ROW][COL];

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

		printf("| %c | %c | %c |\n", g_chess_board[row][0], g_chess_board[row][1], g_chess_board[row][2]);
		if (row != ROW-1){

			printf("|---|---|---|\n");
		}
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
	int input_row = -1;
	int input_col = -1;
	while (1){
		printf("��������ӣ�����������������row col��\n");
		scanf("%d%d", &input_row, &input_col);
		if (input_col > COL || input_col<0 || input_row>ROW || input_row < 0){

			printf("�������̷�Χ����������~~\n");
			continue;
		}
		else {
			if (g_chess_board[input_row][input_col] == ' ')
				g_chess_board[input_row][input_col] = 'x';
			break;
		}
	}
	}
void ComouterMove(){
	//5.�������ӣ������Ϸ�Ƿ����
	while (1){

	int input_row =rand()%ROW;
	int input_col =rand()%COL;
	
	if (g_chess_board[input_row][input_col] == ' '){
	
		g_chess_board[input_row][input_col] = 'o';
		break;
	}

	}

}
char CheckWinner(){
	for (int row = 0; row < ROW; row++){
		if (g_chess_board[row][0] == g_chess_board[row][1]
			&& g_chess_board[row][0] == g_chess_board[row][2]
			&& g_chess_board[row][0] != ' ')
			return g_chess_board[row][0];
	
	}
	for (int col = 0; col < COL; col++){
		if (g_chess_board[0][col] == g_chess_board[1][col]
			&& g_chess_board[0][col] == g_chess_board[2][col]
			&& g_chess_board[0][col] != ' ')
			return g_chess_board[0][col];

	}
	
		if (g_chess_board[0][0] == g_chess_board[1][1]
			&& g_chess_board[0][0] == g_chess_board[2][2]
			&& g_chess_board[0][0] != ' ')
			return g_chess_board[0][0];

		if (g_chess_board[0][2] == g_chess_board[1][1]
			&& g_chess_board[0][2] == g_chess_board[2][0]
			&& g_chess_board[0][2] != ' ')
			return g_chess_board[0][2];
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
	char winner=' ';


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
