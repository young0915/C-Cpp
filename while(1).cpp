#include <stdio.h>


int main(void)
{
	int i = 0;
	int num;
	printf("정수를 입력하시옹?");
	scanf_s("%d", &num);
	printf("\n");
	while (i < num)
	{
		printf("안녕하세요 \n");
		i++;
	}
	return 0;

	/*
	정수를 입력하시옹?4

안녕하세요
안녕하세요
안녕하세요
안녕하세요

C:\Users\goddn\source\repos\studyonee\Debug\studyonee.exe(9028 프로세스)이(가) 0 코드로 인해 종료되었습니다.
이 창을 닫으려면 아무 키나 누르세요.

	*/
}
//int main(void)
//{
//	int i = 0;
//	int num;
//	printf("정수를 입력하시옹?");
//	scanf_s("%d", &num);
//	printf("\n");
//	while (i<num)
//	{
//		printf("안녕하세요 %d \n", i);
//		i++;
//	}
//	return 0;
///*정수를 입력하시옹?3
//
//안녕하세요 0
//안녕하세요 1
//안녕하세요 2
//
//*/
//}
//
