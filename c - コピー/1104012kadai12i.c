#include<stdio.h>
main()
{
	char a[] = { "mikan" }, c[999], * p_a = a, * p_c = c;
	p_c = p_a;
	printf("ƒRƒs[æ‚Ì•¶š—ñ");
	printf("%s", p_c);
}