#include <stdio.h>

int main(void)
{
	int cnt;
	for (cnt = 0; cnt < 3; cnt++)
	{
		int num = 0;
		num++;
		printf("%d번째 반복, 지역변수 num은 %d \n", cnt + 1, num); // 반복이 이뤄질 때마다 변수  num은 메모리상에 할당되고 
		                                                            // 소멸된다. 그래서 10행은 항상 1이다.
	}
	if (cnt == 3)
	{
		int num = 7;
		num++;
		printf("if문 내에 존재하는 지역변수 num %d이다.", num);
	}
	return 0;
}