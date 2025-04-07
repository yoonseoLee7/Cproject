#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int ball[52];

	for (int i = 0; i < 52; i++)
	{
		ball[i] = rand() % 53;
		cout << ball[i] << endl;
	}

	return 0;
}
