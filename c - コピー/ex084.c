#include<stdio.h>
void rts(char* s1, char* s2);
main()
{
	char str1[256];
	char str2[256];
	printf("文字列?");
	scanf("%s", &str1);
	rts(str1,str2);
	printf("str1:%s\nstr2:%s", str1, str2);
}
void rts(char* s1,char *s2)
{
	int i, j;
	for (i = 0; *(s1 + i) != '\0'/*str[0]+str[i]!='\0'*/; i++);
	for (i--/*\0をコピーから除外*/, j = 0; i >= 0; i--, j++)
	{
		*(s2 + j) = *(s1 + i);
	}
	return ;
}