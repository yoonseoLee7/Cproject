#include <iostream>

using namespace std;

int main()
{

	int* DynamicArray = new int[10];

	for (int i = 0; i < 10; ++i)
	{
		DynamicArray[i] = (i + 1) * 3;
	}

	// [20]으로 늘리고 10~19는 4의배수로 출력

	int* SecondArray = new int[20];


	for (int i = 0; i < 20; ++i)
	{
		
		if (i < 10)
		{
			SecondArray[i] = DynamicArray[i];
			cout << SecondArray[i] << endl;
		}
		else {

			SecondArray[i] = (i + 1) * 4;
			cout << SecondArray[i] << endl;
		}

	}
	
	delete[] DynamicArray;
	DynamicArray = nullptr;

	cout << &SecondArray << endl;
	cout << &DynamicArray << endl; 
	cout << DynamicArray << endl; 

	return 0;
}