#include<stdio.h>
void display(int a);/*void=�����c�߂�^+void=�߂�l�Ȃ�*/
main()
{
	int a;
	printf("data?:");
	scanf("%d", &a);
	display(a);/*�֐�display�̌Ăяo��(a�̒l��display�Ɏ����Ă���)*/
}

void display(int a)
{
	printf("���̓f�[�^=%d\n", a);
	return;/*�߂�l�������̂�return�ɉ����ݒ肵�Ȃ�*/
}