#include<stdio.h>
#include<string.h>
struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile student[5];
	struct profile* p;
	p = student;
	for (int i = 0; i < 5; i++, p++)
	{
		printf("���O�����:");
		scanf("%s", p->name);
		printf("���N�������󔒂ŋ�؂��ē���:");
		scanf("%d%d%d", &p->birth[0]/*p->birth[0]�̃A�h���X�Ƃ����C���[�W*/, &p->birth[1], &p->birth[2]);
		printf("���t�^�����:");
		scanf("%s", p->blood);
	}
	p = student;
	for (int i = 0; i < 5; i++, p++)
	{
		if (strcmp(p->blood, "A") == 0)
		{
			printf("%s--%d�N%d��%d���� ���t�^-%s�^\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}
}