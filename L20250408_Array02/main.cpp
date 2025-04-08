#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

#define UP	72
#define LEFT	75
#define DOWN	80
#define RIGHT	77
#define ESC	27

void GotoXY(int x,int y)
{
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

}

//custom 자료형
struct PlayerInfo
{
	int X;
	int Y;
	string Shape;

};

int main()
{
	PlayerInfo* PlayerData = new PlayerInfo();

	PlayerData->X = 0;
	PlayerData->Y = 0;
	PlayerData->Shape = "P";

	bool IsRunning = true;

	while (IsRunning)
	{
		system("cls"); // 잔여 P지움
		GotoXY(PlayerData->X, PlayerData->Y);
		cout << PlayerData->Shape << endl;

		int key = _getch();
		if (key == UP)
		{
			PlayerData->Y--;
		}
		else if (key == LEFT)
		{
			PlayerData->X--;
		}
		else if (key == DOWN)
		{
			PlayerData->Y++;
		}
		else if (key == RIGHT)
		{
			PlayerData->X++;
		}
		else if (key == ESC)
		{
			IsRunning = false;
			//break;
		}

	}

	delete PlayerData;
	PlayerData = nullptr;

	return 0;

	//int Key;
	//while (1)
	//{
	//	Key = _getch();
	//	cout << Key << endl;
	//	224
	//	72
	//	224
	//	75
	//	224
	//	80
	//	224
	//	77
	//}
	
}