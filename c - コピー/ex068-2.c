#include<stdio.h>
main()
{
	char str[256];

	while (gets(str) != NULL)
	{
		puts(str);/*1"行"出力(終わりに自動で\n)*/
	}
}