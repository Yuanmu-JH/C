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
	printf("���Ѿ�׼�����ˣ������ɣ�\n");
	while (1){
		int n = 0;
		printf("���# ");
		scanf("%d", &n);
		if (n < r){
			printf("��С��!\n");
		}
		else if (n > r){
			printf("�´���!\n");
		}
		else{
			printf("��ϲ�㣬�¶���!\n");
			break;
		}
	}
}