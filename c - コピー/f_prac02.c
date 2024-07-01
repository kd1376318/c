#include<stdio.h>
main()
{
	FILE* fp;
	int score = 0,max_score;
	char ch;
	char name[20],max_name[20];
	fp = fopen("score.txt", "r");
	fscanf(fp, "%s%d", max_name, &max_score);
	fclose(fp);
	printf("最高得点 名前:%d %s\n",max_score,max_name);
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
	if (score > max_score)
	{
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s\n%d", name, score);
		fclose(fp);
		printf("ハイスコア更新\n");
	}
	
	
}