#include <stdio.h>


int main(void)
{
	int i = 0;
	int num;
	printf("������ �Է��Ͻÿ�?");
	scanf_s("%d", &num);
	printf("\n");
	while (i < num)
	{
		printf("�ȳ��ϼ��� \n");
		i++;
	}
	return 0;

	/*
	������ �Է��Ͻÿ�?4

�ȳ��ϼ���
�ȳ��ϼ���
�ȳ��ϼ���
�ȳ��ϼ���

C:\Users\goddn\source\repos\studyonee\Debug\studyonee.exe(9028 ���μ���)��(��) 0 �ڵ�� ���� ����Ǿ����ϴ�.
�� â�� �������� �ƹ� Ű�� ��������.

	*/
}
//int main(void)
//{
//	int i = 0;
//	int num;
//	printf("������ �Է��Ͻÿ�?");
//	scanf_s("%d", &num);
//	printf("\n");
//	while (i<num)
//	{
//		printf("�ȳ��ϼ��� %d \n", i);
//		i++;
//	}
//	return 0;
///*������ �Է��Ͻÿ�?3
//
//�ȳ��ϼ��� 0
//�ȳ��ϼ��� 1
//�ȳ��ϼ��� 2
//
//*/
//}
//
