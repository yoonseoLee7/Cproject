#include <iostream>
#include <stdlib.h>

#define BallSize	52

using namespace std;


int ball[BallSize];

void Initialize()
{
	//초기화 공 1~52
	for (int i = 0; i < BallSize; i++)
	{
		ball[i] = i + 1;
	}

}

void Shuffle()
{
	//중복제거
	for (int i = BallSize - 1; i > 0; i--)
	{
		int j = rand() % (i + 1);
		swap(ball[i], ball[j]);
	}
}

void PrintBall()
{
	for (int i = 0; i < BallSize; i++)
	{
		cout << ball[i] << endl;
	}
}

int Minus(int A, int B)
{
	int C = A - B;
	cout << "a-b: "<<C << endl;

	return 0;
}

int main()
{
	srand(time(NULL));


	Initialize();
	Shuffle();
	PrintBall();

	Minus(7, 5);

	return 0;
}

