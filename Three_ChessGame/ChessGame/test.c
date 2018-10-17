#define ROW 3
#define _CRT_SECURE_NO_WARNINGS
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
	//1.定义二维数组表示棋盘
char g_chess_board[ROW][COL];

void Init(){

	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			g_chess_board[row][col] = ' ';
		}
	}

	//2.对棋盘初始化
	

}
	//3.打印棋盘
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
	//满了返回1 没满返回0
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			if (g_chess_board[row][col] == ' ')
				return 0;


		}
		return 1;

	}
}
void PlayerMove(){
	//4.玩家落子，检查游戏是否结束
	// a提示玩家落子
	//  b检验玩家输入
	//  c若玩家输入不合法提示玩家重新输入
	//  d.若合法 赋值
	int input_row = -1;
	int input_col = -1;
	while (1){
		printf("请玩家落子（输入棋盘数字坐标row col）\n");
		scanf("%d%d", &input_row, &input_col);
		if (input_col > COL || input_col<0 || input_row>ROW || input_row < 0){

			printf("输入棋盘范围错误，请重输~~\n");
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
	//5.电脑落子，检查游戏是否结束
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
	//1.返回x表示玩家胜利
	//2.返回o表示电脑胜利
	//3.返回q表示和棋
	//4.返回‘ ‘表示游戏继续

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

			printf("玩家胜利！\n");
		}
		else if (winner == 'o'){

			printf("电脑胜利!\n");
		}
		else if (winner == 'q'){
			printf("和棋\n");
		}
	
	system("pause");
	return 0;
}
