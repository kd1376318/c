#include<stdio.h>
main()
{
	FILE* fp;
	char str[100];
	int i = 3;
	fp = fopen("file02.txt", "r");
	while (i--)
	{
		fscanf(fp, "%s", str);
		printf("����:%s\n", str);
	}
	int lv, hp;
	char equip[100];
	fscanf(fp, "%d%d%s", &lv, &hp, equip);
	printf("lv:%d hp:%d ����:%s\n", lv, hp, equip);

	/*fgets�̗�*/
	char c;
	c = fgetc(fp);/*���s�̂ݓǂݎ��*/
	fgets(str, sizeof(str), fp);
	printf("%s\n", str);
	fclose(fp);
	
}