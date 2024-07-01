#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define	Skil_num 3
#define	Mob_Num 3

typedef struct//skill�^�\����
{
	char name[20];//�X�L����
	int type;//�X�L���̎�� 0:hp�� 1:atkup 2:
	int use_mp;//�g�pmp��
	int effect;//�X�L������
}skill;

typedef struct//spec�^�\����
{
	char name[20];//���O
	int hp;//����
	int atk;//�U����
	int def;//�h���
	UNIT state;//���
}spec;

typedef	struct//chara�^�\����
{
	spec sp;//spec�^�\���̕ϐ�
	int maxhp;//�ő�hp
	int mp;//mp
	skill skl[Skil_num];//skill�^�\���̔z��
}chara;

typedef struct//mob�^�\����
{
	spec sp;//spec�^�\����
	int rate;//��Ԉُ�U���������[�g%�\�L
}mob;

enum BitState
{
	Base = 0,//0000 0000�ʏ�
	Poison = 1 << 0,//0000 0001��
	Sleep = 1 << 1,//0000 0010����
	Paralysis = 1 << 2,//0000 0100���
	Burn = 1 << 3,//0000 1000�Ώ�
	AtkUp = 1 << 4,//0001 0000�U���㏸
	AtkDown = 1 << 5//0010 0000�U�����~
};

typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);


main()
{
	UINT Mystate = Base;
	Mystate |= (Poison | Sleep);
	DisplayStatus(Mystate);
	ChangeFlag(&Mystate);
	DisplayStatus(Mystate);
	ClearFlag(&Mystate);
	DisplayStatus(Mystate);
}

void DisplayStatus(UINT s)
{
	printf("****���݂̏��****\n");
	if (s & Poison)
	{
		printf("��\n");
	}
	if (s & Sleep)
	{
		printf("����\n");
	}
	if (s & Paralysis)
	{
		printf("���\n");
	}
	if (s & Burn)
	{
		printf("�Ώ�\n");
	}
	if (s & AtkUp)
	{
		printf("�U���̓A�b�v\n");
	}
	if (s & AtkDown)
	{
		printf("�U���̓_�E��\n");
	}
	if (s == Base)
	{
		printf("�ʏ���");
	}
	printf("*********************\n");
}

void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԃɂ��܂����H\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U����");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default://1~6�ɍ��v���Ȃ��������̏���
			break;
		}
	}
}

void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԃ��������܂���\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U����");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a) 
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		default://1~6�ɍ��v���Ȃ��������̏���
			break;
		}
	}
}
