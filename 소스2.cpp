#include <iostream>

using namespace std;


//�ݺ� 
//�ݺ���Ų��.
//for��, while�� 
// for(�ʱⰪ; ����; ������)


//���
/*
     1. break  = : ������ �����ϰ� ����������.
	 2. return = : ���� ��ȯ�ϰ�(�����) ������.
	 3. continue = : ������ �ǳʶڴ�.(��ġ ó������ ���� �� ó��-> ����ó���� �� ���)
	 4. goto = : ������� �� ��
*/
/*

*/
int main()
{
	int i;
	int sum = 0;
	/*for (i = 0; i < 10; i++)
	{
		cout << "���� ���� ��ī����" << i+1<< endl;
	}
*/
	//���� �غ��� 
	//1���� 100���� ���� ���Ͻÿ�
	
	/*for (i = 0; i <= 100; i++)
	{
		sum += i;
	}
	cout << sum << endl;
	int j;

	int num;
	cout << "�����ϴ� ���ڸ� �Է����� : " << endl;
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