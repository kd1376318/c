#include<stdio.h>
main()
{
	int a,b,c,ret;
	printf("3�̐������󔒂ŋ�؂��ē���:");
	ret = scanf("%d%d%d", &a, &b, &c);/*ret�ɖ߂�l����*/
	printf("ret=%d a=%d b=%d c=%d\n", ret, a, b, c);/*ret:�߂�l ���̏ꍇ����abc��3��*/
	printf("���������(Ctrl+Z�ŏI��)");
	while (scanf("%d", &a) != EOF)/*�߂�l(���̓f�[�^�̌�)=EOF(-1)�łȂ��Ȃ�p��:���͐���ɓ��͂��ꂽ�ꍇ�߂�l(��)=1*/
	{
		printf("a=%d\n", a);
		printf("���������(Ctrl+Z�ŏI��)");
	}
}
