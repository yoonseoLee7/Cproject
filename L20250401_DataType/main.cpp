#include <iostream>

using namespace std;

int main()
{

	//bool Condition1 = 3 == 3; // true (1)
	//bool Condition2 = 3 < 3;  // false (0)

	////C언어에서는 if의조건이 0 아니면 모두 true임.
	//if (Condition1) 
	//{

	//}
	//else
	//{

	//}


	//int Data[10];

	//for (int i = 0; i < 10; i++)
	//{
	//	Data[i] = i;
	//}

	//for (int i = 0; i < 10; ++i)
	//{
	//	Data[i] = i+1;
	//}
	//Goblins[0] = 1;
	//Goblins[1] = 2;
	//Goblins[2] = 1;
	//Goblins[3] = 2;
	//Goblins[4] = 2;


	for (int y = 1; y <= 5; y++) //y축
	{
		for (int x = 1; x <= y; x++) //x축
		{
			cout << "*";

		}
		cout<< endl;

	}

	for (int y = 1; y <= 5; y++) //y축
	{
		for (int x = 5; x >= y; x--) //x축
		{
			cout << "*";

		}
		cout << endl;

	}

	
	for (int y = 5; y >= 1; y--) 
	{
		for (int x = 1; x <= y-1; x++) 
		{
			cout << " ";
			
		}
		for (int z = 5; z >= y; z--) 
		{
			cout << "*";

		}
		cout << endl;

	}

	for (int y = 5; y >= 1; y--)
	{
		for (int x = 1; x <= y; x++)
		{
			cout << "*";

		}
		for (int z = 0; z <= 5-y; z++)
		{
			cout << " ";

		}
		cout << endl;

	}


	//UnrealEngine 엔진이 돌아가는 루틴
	//GameLoop
	//for (;;) -> Frame
	//{
	//	Input(); 입력
	//	Tick(); 처리
	//	Render(); 출력
	//}


	/*int Map[10][10]=
	{
		{1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1}
	};

	for (int y = 0; y < 10; ++y)
	{
		for (int x = 0; x < 10; ++x)
		{
			cout << Map[y][x];
		}
		cout << endl;
	}*/

	

	return 0;
}