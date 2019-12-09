#include <iostream>

using namespace std;


//반복 
//반복시킨다.
//for문, while문 
// for(초기값; 조건; 증감문)


//제어문
/*
     1. break  = : 연산을 중지하고 빠져나간다.
	 2. return = : 값을 반환하고(내뱉고) 나간다.
	 3. continue = : 연산을 건너뛴다.(마치 처음으로 가는 것 처럼-> 예외처리할 때 사용)
	 4. goto = : 사용하지 말 것
*/
/*

*/
int main()
{
	int i;
	int sum = 0;
	/*for (i = 0; i < 10; i++)
	{
		cout << "경일 게임 아카데미" << i+1<< endl;
	}
*/
	//지금 해볼것 
	//1부터 100까지 합을 구하시오
	
	/*for (i = 0; i <= 100; i++)
	{
		sum += i;
	}
	cout << sum << endl;
	int j;

	int num;
	cout << "좋아하는 숫자를 입력하자 : " << endl;
	cin >> num;

	for (int u = 1; u < 9; u++)
	{
		cout << num << "*" << u << "=" << num * u << endl;

	}
	for (i = 2; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
			cout << i << "*" << j <<"="<< i * j << endl;
	}
	int tum = 0;
	int k=0;
	while (k<=100)
	{
		tum += k;
		k++;
	}
	cout << tum << endl;
*/

	for (int z =0;z<10;z++)
	{
		if (z % 2 != 0) continue;

		else
			cout << z;
	}
	system("pause");
	return 0;
}