#include <iostream>
#include "TemplateTest.h"
//STL -> standard template library
//탬플릿은 에러가 나면 코드를 추적하기가 어려움
using namespace std;

template <typename T> //자바의 제네릭이랑 비슷 , 컴파일할 때 생성됨 함수에 명시하려면 헤더에 작업해야함
class T_FourBasic
{
public:
	T Add(T A, T B);
	T Subtract(T A, T B);
	T Multiply(T A, T B);
	T Divide(T A, T B);
};

int main()
{
	T_FourBasic<int> A;

	cout << A.Add(10, 2) << endl;
	cout << A.Subtract(10,2) << endl;
	cout << A.Multiply(10,2) << endl;
	cout << A.Divide(10,2) << endl;
		
	T_FourBasic<float> B;

	cout << B.Add(1.f, 2.f) << endl;
	cout << B.Subtract(7.1f, 2.f) << endl;
	cout << B.Multiply(.1f, 2.f) << endl;
	cout << B.Divide(1.f, 2.f) << endl;

	TemplateTest<int> TT;

	cout << TT.Add(10, 2) << endl;
	cout << TT.Subtract(10, 2) << endl;
	cout << TT.Multiply(10, 2) << endl;
	cout << TT.Divide(10, 2) << endl;

	return 0;
}

template<typename T>
T T_FourBasic<T>::Add(T A, T B)
{
	return A + B;
}

template<typename T>
T T_FourBasic<T>::Subtract(T A, T B)
{
	return A - B;
}

template<typename T>
T T_FourBasic<T>::Multiply(T A, T B)
{
	return A * B;
}

template<typename T>
T T_FourBasic<T>::Divide(T A, T B)
{
	return A / B;
}
