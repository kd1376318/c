#include<stdio.h>
#define mapnum 3
#define w 10
#define h 5

typedef struct
{
	int m_map[h][w];
}map;

void setMap(char* filename, map* m);
void drowMap(map m);

main()
{
	map mapdata;
	char* mapfilename[mapnum] = { "map0.txt","map1.txt","map2.txt" };
	int select;
	printf("表示マップ？(0,1,2)>");
	scanf("%d", &select);
	setMap(mapfilename[select], &mapdata);
	drowMap(mapdata);
}

void setMap(char* filename, map* m)
{
	FILE* fp;
	char ch;
	int i, j;
	if (fp = fopen(filename, "r"))
	{
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < w; j++)
			{
				ch = fgetc(fp);
				m->m_map[i][j] = ch - '0';
			}
			fgetc(fp);//\nを読み捨てる
		}
		fclose(fp);
	}
}

void drowMap(map m)
{
	int i, j;
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
		{
			if (m.m_map[i][j] == 1)
			{
				printf("■");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}