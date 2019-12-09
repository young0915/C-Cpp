#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;



/*
1. 캐릭터 선택을 한다. (4명)
2. 몬스터가 있다.(3마리)
3. 캐릭터가 몬스터를 ATK
3-1. 몬스터가 캐릭터 공격 Atk, Hp, Mp, Atk, critical
*/
//
//void Monstershow(int b)
//{
//	srand(time(NULL));
//	int MAtk;
//	MAtk = rand() % 1;
//	int Hp = 10;
//	while (Hp == 0)
//	{
//		if (b == 1)
//			cout<<'유저가 공격했다.'<<endl;
//	}
//}
int main()
{
	int a;
	srand((int)time(NULL));

	cout << "1.전사 2. 마법사 3. 궁수 4. 도적" << endl;
	cout << "캐릭터를 선택하시오 : ";
	cin >> a;
	if (a == 1)
	{
		cout << "전사 입장" << endl;
		cout << "전사님 환영합니다." << endl;
	}
	else if (a == 2)
	{
		cout << "마법사 입장" << endl;
		cout << "마법사님 환영합니다." << endl;
	}
	else if (a == 3)
	{
		cout << "궁수 입장" << endl;
		cout << "궁수님 환영합니다." << endl;

	}
	else if (a == 4)
	{
		cout << "도적 입장" << endl;
		cout << "도적님 환영합니다." << endl;
	}
	int monsters;
	monsters = rand() % 2;
	int b;
	switch (monsters)
	{
	case 0:
		cout << "전기포켓몬 등장" << endl;
		break;
	case 1:
		cout << "불포켓몬 등장" << endl;
		break;

	case 2:
		cout << "물포켓몬 등장" << endl;
		break;

	} // 2번 완료

	cout << "몬스터 출현! 몬스터 출현!" << endl;
	
	int Hp = 100;
	int atk = 2;
	int matk = 1;
	int MHp = 80;
	
	int mmatk;
	int mcritical;
	
	int critical;
	while (Hp)
	{
		mmatk = rand() % 3;
		critical = rand() % 5;
		mcritical = rand() % 3;
		cout << "1. 공격 2. 힐 3.크리티컬" << endl;
		cin >> b;
		if (b == 1)
		{

			cout << "H 공격" << endl;
			MHp -= atk;
			cout << "MHp 는" << MHp << endl;
			switch (mmatk)
			{
			case 0:
				cout << "M 공격" << endl;
				Hp -= matk;
				cout << "주인공 Hp" << Hp << endl;

				break;
			case 1 :
				cout << "M 힐 " << endl;
				MHp += 1;
				break;
			case 2:
				cout << "M 크리티컬" << endl;
				Hp -= mcritical;
				cout << "주인공 Hp" << Hp << endl;

			default:
				break;
			}
			if (MHp == 0 || Hp == 0)
			{
				cout << "주인공 Hp 몬스터 MHp" << Hp << MHp << endl;

				cout << "게임 끝" << endl;
				break;
			}
		}

		else if (b == 2)
		{
			cout << "H 힐" << endl;
			Hp += 5;
			switch (mmatk)
			{
			case 0:
				cout << "M 공격" << endl;
				Hp -= matk;
				cout << "주인공 Hp" << Hp << endl;

				break;
			case 1:
				cout << "M 힐" << endl;
				MHp += 1;

				break;
			case 2:
				cout << "M 크리티컬" << endl;
				Hp -= mcritical;
				cout << "주인공 Hp" << Hp << endl;
			default:
				break;
			}
			if (MHp == 0 || Hp == 0)
			{
				cout << "주인공 Hp 몬스터 MHp" << Hp << MHp << endl;

				cout << "게임 끝" << endl;
				break;
			}
		}

		else if (b == 3)
		{
			cout << "H 크리티컬" << endl;
			MHp *= critical;
			switch (mmatk)
			{
			case 0:
				cout << "M 공격" << endl;
			    Hp -= matk;
				cout << "주인공 Hp" << Hp << endl;

				break;
			case 1:
				cout << "M 힐" << endl;
				MHp += 1;
				cout << "주인공 Hp" << Hp << endl;

				break;
			case 2:
				cout << "M 크리티컬" << endl;
				Hp -= critical;
				cout << "주인공 Hp" << Hp << endl;
			default:
				break;
			}
			if (MHp == 0 || Hp == 0)
			{
				cout << "주인공 Hp 몬스터 MHp" << Hp <<MHp<< endl;

				cout << "게임 끝" << endl;
				break;
			}
		}


		/*	
			if (MHp == 0 || Hp == 0)
			{
				cout << "게임 끝" << endl;
				break;
			}
			continue;

		*/
				


		}
	return 0;
		
		
	}

