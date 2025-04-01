#include <iostream>

using namespace std;

int main()
{
	//초기화
	float Color = 0;
	int Apple = 0;
	int Goblin = 0;
	char Alphabet = 'A';
	bool Condition = true;
	bool IsFinish = false;
	bool IsRunning = true;

	char Key = 0;

	while (IsRunning)
	{
		//Input
		cin >> Key;

		//Process
		if (Key == 'q')
		{
			IsRunning = false;
		}

		//Render
		cout << "모이셈" << endl;
	}


	return 0;
}