#include<stdio.h>
main()
{
	int ap[2][2][3]={ {{3,4,5},{4,5,6}},{{2,2,3},{2,5,6}} };
	int al,li, co,total=0;
	for (al = 0; al < 2; al++)
	{
		printf("�A�p�[�g%d", al+1);
		for (li = 0; li < 2; li++)
		{
			printf("(%d�K):", li+1);
			for (co = 0; co < 3; co++)
			{
				printf("%d ", ap[al][li][co]);
				total += ap[al][li][co];
			}
		}
		printf("\n");
	}
	printf("�S�̂�%d�l�Z��ł��܂�", total);
}