#include <iostream>
#include <algorithm>
#include <string>

#define CARD_COUNT		52

using namespace std;

//global variable
int Deck[CARD_COUNT] = { 0, };

void Initialize()
{
	srand((unsigned int)time(NULL));

	for (int Index = 0; Index < CARD_COUNT; Index++)
	{
		Deck[Index] = Index + 1;
	}
}

void Shuffle()
{
	int Temp = 0;
	for (int Count = 0; Count < CARD_COUNT * 1000; Count++)
	{
		int First = rand() % CARD_COUNT;
		int Second = rand() % CARD_COUNT;
		Temp = Deck[First];
		Deck[First] = Deck[Second];
		Deck[Second] = Temp;
	}
}

string CardToString(int num)
{

	string Types[] = {"♥","◆","♠","♣"};

	int CardType = (num-1) / 13;
	int ResultNum = (num-1) % 13 + 1;

	if (ResultNum == 1)		return Types[CardType]+"A";
	else if(ResultNum == 11) return  Types[CardType] + "J";
	else if (ResultNum == 12) return Types[CardType] + "Q";
	else if (ResultNum == 13) return Types[CardType] + "K";
	else return Types[CardType]+to_string(ResultNum);
}

void Print()
{

	int Computer1 = (Deck[0]-1) % 13+1;
	int Computer2 = (Deck[1] - 1) % 13+1;
	int Player1 = (Deck[2] - 1) % 13+1;
	int Player2 = (Deck[3] - 1) % 13+1;

	int ComputerSum = Computer1 + Computer2;
	int PlayerSum = Player1 + Player2;


	cout << "Computer: " << CardToString(Deck[0]) << ", " << CardToString(Deck[1]) << " (합: " << ComputerSum << ")" << endl;
	cout << "================" << endl;
	cout << "Player: " << CardToString(Deck[2]) << ", " << CardToString(Deck[3]) << " (합: " << PlayerSum << ")" << endl;

	cout << "================" << endl;


	string result = (ComputerSum > 21 && PlayerSum > 21) ? "둘 다 21 초과 - 무승부" :
		(ComputerSum > 21) ? "Player 승" :
		(PlayerSum > 21) ? "Computer 승" :
		(ComputerSum > PlayerSum) ? "Computer 승" :
		(PlayerSum > ComputerSum) ? "Player 승" :
		"무승부";

	cout << result << endl;	

}


int main()
{
	Initialize();
	Shuffle();
	Print();

	return 0;
}