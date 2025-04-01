#include <iostream>

using namespace std;

int main()
{

	//int Korean = 70;
	//int English = 60;
	//int Mathmatics = 90;

	//int Total = Korean + English + Mathmatics;
	//float Average = (float)Total / 3.0f;

	//cout << Average << endl;

	//반복문
	int Korean[10];

	printf("%x\n", Korean);
	printf("%x\n", &Korean[0]);
	printf("%x\n", &Korean[1]);

	for (int i = 0; i < 10; i++) {
		Korean[i] = 3;
	}

	return 0;
}