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

	//1.初始化地图 布置雷阵
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
	//1.初始化地图 布置雷阵
	Init(mine_map, show_map);
	while (1){
	//2.打印show_map
		Display_show_map(show_map,row,col);

	//3.提示用户输入坐标
		printf("请输入坐标(row col):\n");
		scanf("%d %d", &row,&col);
		if (row >= 1 && row <= ROW&&col >= 1 && col <= COL){
	//4.对用户输入进行判定
			if (mine_map[row][col] == '1'){
	//5.判定玩家是否踩雷 如果踩雷游戏结束打印雷阵
				printf("游戏失败\n");
				Display_mine_map(mine_map);
				break;
			}
			else{
				//6.若没有,判定玩家是否胜利
				//(玩家翻开的方块=ROW*COL-雷数)
				++not_mine_count;
				
				if (not_mine_count==ROW*COL-9){
					printf("游戏胜利!\n");
					break;
				}
				else{
//7.若没有胜利,统计当前方块附近有几块雷打印show_map回到第三步					
			
	  UpdateMine(show_map,mine_map, row, col);
		Display_show_map(show_map, row, col);

				}
			}
			
		}
	}

}

void StartGame(){
	printf("**************\n");
	printf("1.开始游戏\n");
	printf("2.退出游戏\n");
	printf("**************\n");
	printf("请输入对应数字:\n");
	scanf("%d", &input);
	if (input == 1){
		Game();
	}
	else if (input == 2)
	{
		printf("游戏结束!\n");
		exit(0);
	}
	else{
		printf("输入错误,请重输!!\n");
		StartGame();
	}
}
int main(){
	//1.定义两个二维数组mine_map show_map
	//2.min_map中用'0'表示不是地雷 用'1'表示是地雷
	//3.show_map中用'*'表示未打开的方块 用数字表示已打开方块周围的雷
	while (1)
	{

	StartGame();
	}
	
	system("pause");
	return 0;
}