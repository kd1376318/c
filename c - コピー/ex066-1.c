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
			(*p)++;//�Q�Ƃ���A�h���X��1���炷
		}
		printf("\n");
		p++;//�Q�Ƃ���A�h���X��z��̗v�f1�����炷
		
	}


}