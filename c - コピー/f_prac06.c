#include<stdio.h>
#define mapnum 3
#define w 10
#define h 5

typedef struct
{
	int m_map[h][w];
}map;
typedef struct
{
	int x, y;
}pos;

void setMap(char* filename, map* m);
void drowMap(map m);
void charamove(map* m,pos* p);

main()
{
	map mapdata;
	pos charapos = { 1,1 };
	char* mapfilename[mapnum] = { "map0.txt","map1.txt","map2.txt" };
	int select = 0;
	setMap(mapfilename[select], &mapdata);
	mapdata.m_map[charapos.y][charapos.x] = 2;
	while (1)
	{
		system("cls");
		drowMap(mapdata);
		charamove(&mapdata, &charapos);
	}
	
}

void charamove(map* m, pos* p)
{
	char ch;
	ch = getch();
	switch (ch)
	{
	case 'd':
		if (m->m_map[p->y][(p->x) + 1] != 1)
		{
			m->m_map[p->y][p->x] = 0;
			m->m_map[p->y][(p->x) + 1] = 2;
			p->x += 1;
		}
		break;
	case 'a':
		if (m->m_map[p->y][(p->x) - 1] != 1)
		{
			m->m_map[p->y][p->x] = 0;
			m->m_map[p->y][(p->x) - 1] = 2;
			p->x -= 1;
		}
		break;
	case 'w':
		if (m->m_map[p->y - 1][(p->x)] != 1)
		{
			m->m_map[p->y][p->x] = 0;
			m->m_map[p->y - 1][(p->x)] = 2;
			p->y -= 1;
		}
		break;
	case 's':
		if (m->m_map[p->y + 1][(p->x)] != 1)
		{
			m->m_map[p->y][p->x] = 0;
			m->m_map[p->y + 1][(p->x)] = 2;
			p->y += 1;
		}
		break;
	}
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
			fgetc(fp);//\n‚ð“Ç‚ÝŽÌ‚Ä‚é
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
			switch (m.m_map[i][j])
			{
			case 0:
				printf(" ");
				break;
			case 1:
				printf("¡");
				break;
			case 2:
				printf("@");
				break;
			}
			
		}
		printf("\n");
	}
}