#include<stdio.h>
main()
{
	int n1, n2, n3;
	char co;
	printf("処理を入力:");
	scanf("%c", &co);
	printf("整数を入力:");
	scanf("%d%d%d", &n1, &n2, &n3);
	switch (co)
	{
		case 0x44:
		case 0x64:
			if (n1 <= n2)
			{
				if (n2 <= n3)
				{
					printf("最大値は%dです", n3);
					break;
				}
				printf("最大値は%dです", n2);
				break;

			}
			printf("最大値は%dです", n1);
			break;
		case 0x53:
		case 0x73:
			if (n1 >= n2)
			{
				if (n2 >= n3)
				{
					printf("最小値は%dです", n3);
					break;
				}
				printf("最小値は%dです", n2);
				break;

			}
			printf("最小値は%dです", n1);

			break;
		case 0x47:
		case 0x67:
			printf("合計は%dです", n1 + n2 + n3);
			break;
		case 0x48:
		case 0x68:
			printf("平均は%.2fです",(float)(n1+n2+n3)/3);
			break;
		default:
			printf("ERROR");
	}
}