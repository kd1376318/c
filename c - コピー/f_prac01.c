#include<stdio.h>
main()
{
	FILE* fp;
	int score = 0;
	char ch;
	char name[20];
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
	fp = fopen("score.txt", "w");
	fprintf(fp, "%s\n%d", name, score);
	fclose(fp);
	
}