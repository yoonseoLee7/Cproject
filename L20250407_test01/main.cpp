#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int ball[52];

	//초기화 공 1~52
	for (int i = 0; i < 52; i++)
	{
		ball[i] = i + 1;
	}

	//중복제거
	for (int i = 51; i > 0; i--)
	{
		int j = rand() % (i + 1); 
		swap(ball[i], ball[j]);
	}


	for (int i = 0; i < 52; i++)
	{
		cout << ball[i] << endl;
	}


	/*ball[i] = rand() % 53;
	cout << ball[i] << endl;*/

	return 0;
}

