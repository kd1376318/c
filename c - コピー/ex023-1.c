#include<stdio.h>
main()
{
	int sc;
	printf("�b������́F");
	scanf("%d", &sc);
	if (sc <= 5000)
	{
		if (0 <= sc)
		{
			printf("%d����%d��%d�b�ł�", sc / 3600, sc / 60 % 60, sc % 360 % 60);
		}
		else
		{
			printf("�}�C�i�X�̓G���[�ł�");
		}
	}
	else
	{
		printf("ERROR");
	}
}