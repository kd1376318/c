#include<stdio.h>
main()
{
	char *p_game[3] = { "wii","ds","playstation4" };
	int i;
	char **p;
	p = p_game;
	for (i = 0; i < 3; i++)
	{
		while (**p != '\0')
		{
			printf("%c", **p);
			(*p)++;//参照するアドレスを1ずらす
		}
		printf("\n");
		p++;//参照するアドレスを配列の要素1つ分ずらす
		
	}


}