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
	printf("�ō����_ ���O:%d %s\n",max_score,max_name);
	printf("�v���C���[�̖��O:");
	scanf("%s", name);
	while (1)
	{
		printf("���݂̃X�R�A:%d('e'�ŏI��)\n", score);
		ch = getch();//�W�����͂��ꂽ�����̕����R�[�h���i�[����
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
		printf("�n�C�X�R�A�X�V\n");
	}
	
	
}