#include<stdio.h>
int/*�߂�l��int�^�Ƃ��Đ錾*/ add(int a, int b);/*�v���g�^�C�v�錾(�֐��̎g�p�錾)&�����̌��錾*/
main(/*�����������ꍇ������void������*/)/*�֐��̌^���ȗ������int�^�Ƃ��ď��������*/
{
	int a, b, kotae;
	printf("������2����:");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);/*�֐�add�̌Ăяo����a,b�̒l��add�̈���a,b�ɓn��*/
	printf("���v��%d�ł�\n", kotae);
	//return 0;
}

/*�֐�add�̋L�q*/
int add(int a, int b);
{
	int ans;
	ans = a + b;
	return ans;/*ans��add�̖߂�l�Ƃ��đ���,�Ăяo�����ɐ��䂪�A��(�֐�add�̏I��)*/
}