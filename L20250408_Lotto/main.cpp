#include <iostream>
#include <algorithm>

using namespace std;

#define LOTTO_NUMBER		45
#define LOTTO_COUNT		6

int Lotto[LOTTO_NUMBER] = { 0, };

void Initialize()
{
	srand((unsigned int)time(NULL));

	for (int Index = 0; Index < LOTTO_NUMBER; Index++)
	{
		Lotto[Index] = Index+1;
	}
}

void Shuffle()
{
	int Temp = 0;
	for (int Count = 0; Count < LOTTO_NUMBER * 645; Count++)
	{
		int First = rand() % LOTTO_NUMBER;
		int Second = rand() % LOTTO_NUMBER;
		Temp = Lotto[First];
		Lotto[First] = Lotto[Second];
		Lotto[Second] = Temp;
	}
}

void PrintNum()
{
	cout << "로또 추첨 번호: ";

	for (int i=0; i< LOTTO_COUNT; i++)
	{
		cout << Lotto[i]<<" ";
	}

	cout << "\n";
	
}

int main()
{
	Initialize();
	Shuffle();
	PrintNum();

	return 0;
}