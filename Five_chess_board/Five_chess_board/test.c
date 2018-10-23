#define _CRT_SECURE_NO_WARNINGS
#define ROW 15
#define COL 15
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//1.定义二维数组表示棋盘

char g_chess_board[ROW][COL];
int input_row = -1;
int input_col = -1;
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
	for (int row = 0; row < ROW; row++){

		printf("   %2d", row);
	}
	printf("\n");


	for (int row = 0; row < ROW; row++){

		for (int i = 0; i < ROW; i++){
			if (i == 0){
				printf("  |----");

			}
			else{

				printf("|----");
			}

		}
		printf("\n");
		for (int col = 0; col < COL; col++){
			if (col != COL - 1){
				if (col == 0){
					printf("%2d| %c  ", row, g_chess_board[row][col]);

				}
				else{

					printf("| %c  ", g_chess_board[row][col]);
				}
			}
			else{
				printf("| %c  |\n", g_chess_board[row][col]);

			}

		}




	}
	

		for (int i = 0; i < ROW; i++){
			if (i == 0){
				printf("  |----");

			}
			else{

				printf("|----");
			}		
	}
		printf("\n");
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
	
	while (1){
		printf("请玩家落子（输入棋盘数字坐标row col）\n");
		scanf("%d%d", &input_row, &input_col);
		if (input_col > COL || input_col<0 || input_row>ROW || input_row < 0){

			printf("输入棋盘范围错误，请重输~~\n");
			continue;
		}
		else if (g_chess_board[input_row][input_col] != ' '){
		
			printf("当前棋格有子，请重下！\n");
			continue;
		}
		else if (g_chess_board[input_row][input_col] == ' '){
				g_chess_board[input_row][input_col] = 'x';
				
			break;
		}
	}
}
void ComputerMove_upgrade_diaplus(int row, int col){

	while (1){
		
			if (g_chess_board[++row][++col] == ' '){

				g_chess_board[row][col] = 'o';
				break;
			}
		}
}
void ComputerMove_upgrade_diareduce(int row, int col){

	while (1){

		if (g_chess_board[--row][--col] == ' '){

			g_chess_board[row][col] = 'o';
			break;
		}
	}
}
void ComputerMove_upgrade_rowplus(int row, int col){
	while (1){


		if (g_chess_board[++row][col] == ' '){

			g_chess_board[row][col] = 'o';
			break;
		}
	}
}
void ComputerMove_upgrade_colplus(int row, int col){
	while (1){


		if (g_chess_board[row][--col] == ' '){

			g_chess_board[row][col] = 'o';
			break;
		}
	}
}
void ComputerMove_upgrade_rowreduce(int row, int col){
	while (1){


		if (g_chess_board[--row][col] == ' '){

			g_chess_board[row][col] = 'o';
			break;
		}
	}
}
void ComputerMove_upgrade_colreduce(int row, int col){
	while (1){


		if (g_chess_board[row][--col] == ' '){

			g_chess_board[row][col] = 'o';
			break;
		}
	}
}

ComputerMove_upgrade_move(row, col){
	while (1){


		if (g_chess_board[row][--col] == ' '){

			g_chess_board[row][col] = 'o';
			break;
		}
		if (g_chess_board[--row][col] == ' '){

			g_chess_board[row][col] = 'o';
			break;
		}
		if (g_chess_board[++row][col] == ' '){

			g_chess_board[row][col] = 'o';
			break;
		}
		if (g_chess_board[row][++col] == ' '){

			g_chess_board[row][col] = 'o';
			break;
		}
	}

}




void ComputerMove_upgrade(int row, int col){
	
	if (g_chess_board[row - 1][col] == g_chess_board[row][col]){

		ComputerMove_upgrade_rowplus(row, col);
	}
	else if (g_chess_board[row][col - 1] == g_chess_board[row][col]){
		ComputerMove_upgrade_colplus(row, col);

	}
	else if (g_chess_board[row + 1][col] == g_chess_board[row][col]){

		ComputerMove_upgrade_rowreduce(row, col);
	}
	else if (g_chess_board[row][col + 1] == g_chess_board[row][col]){
		ComputerMove_upgrade_colreduce(row, col);

	}
	else if (g_chess_board[row+1][col + 1] == g_chess_board[row][col]){
		ComputerMove_upgrade_diareduce(row, col);

	}
	else if (g_chess_board[row - 1][col - 1] == g_chess_board[row][col]){
		ComputerMove_upgrade_diaplus(row, col);

	}
	else{
		ComputerMove_upgrade_move(row, col);


	}

}
void ComouterMove(){
	//5.电脑落子，检查游戏是否结束
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
	   
	   
	//检查列是否有连子
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
	

	
//检查k=-1/2时 是否有连子
	
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
	//检查k=1/2时 是否有连子
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
	//1.返回x表示玩家胜利
	//2.返回o表示电脑胜利
	//3.返回q表示和棋
	//4.返回‘ ‘表示游戏继续
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
		ComputerMove_upgrade(input_row, input_col);
		//ComouterMove();
		winner = CheckWinner();
		if (winner != ' '){
			break;
		}

	}


	if (winner == 'x'){
		print();
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
