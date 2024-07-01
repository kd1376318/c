#include<stdio.h>
main()
{
	FILE* fp;
	int score = 0;
	char ch;
	char name[20];
	printf("プレイヤーの名前:");
	scanf("%s", name);
	while (1)
	{
		printf("現在のスコア:%d('e'で終了)\n", score);
		ch = getch();//標準入力された文字の文字コードを格納する
		if (ch == 'e') {
			break;
		}
		score++;
	}
	fp = fopen("score.txt", "w");
	fprintf(fp, "%s\n%d", name, score);
	fclose(fp);
	
}