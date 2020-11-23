#include "game.h"


void Menu()
{
	printf("#############################\n");
	printf("##    1. Play     2. Exit  ##\n");
	printf("#############################\n");
	printf("Please Select # ");
}

void Game()
{
	srand((unsigned long)time(NULL));
	int r = rand() % RANGE + 1;
	printf("我已经准备好了，你来吧！\n");
	while (1){
		int n = 0;
		printf("你猜# ");
		scanf("%d", &n);
		if (n < r){
			printf("猜小了!\n");
		}
		else if (n > r){
			printf("猜大了!\n");
		}
		else{
			printf("恭喜你，猜对了!\n");
			break;
		}
	}
}