#include<stdio.h>
main()
{
	char data1[] = { "abcde" };
	char data2[5];
	for (int i = 0; data1[i] != '\0'; i++)
	{
		data2[i] = data1[i];
	}
	printf("(�R�s�[��) �z�� data1[]=%s\n", data1);
	printf("(�R�s�[��) �z�� data2[]=%s", data2);
}