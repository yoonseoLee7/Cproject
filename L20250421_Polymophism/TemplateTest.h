#pragma once

template<typename T>
class TemplateTest
{
public:
	T Add(T A, T B)
	{
		return A + B;
	}

	T Subtract(T A, T B)
	{
		return A - B;
	}

	T Multiply(T A, T B)
	{
		return A * B;
	}

	T Divide(T A, T B)
	{
		return A / B;
	}


};

//#include <iostream>
//#include "TemplateTest.h"
//#include <vector>
////STL -> standard template library
////탬플릿은 에러가 나면 코드를 추적하기가 어려움
//using namespace std;
//
////template <typename T> //자바의 제네릭이랑 비슷 , 컴파일할 때 생성됨 함수에 명시하려면 헤더에 작업해야함
////class T_FourBasic
////{
////public:
////	T Add(T A, T B);
////	T Subtract(T A, T B);
////	T Multiply(T A, T B);
////	T Divide(T A, T B);
////};
//
//class Data
//{
//
//};
//
//int main()
//{
//	//T_FourBasic<int> A;
//
//	//cout << A.Add(10, 2) << endl;
//	//cout << A.Subtract(10,2) << endl;
//	//cout << A.Multiply(10,2) << endl;
//	//cout << A.Divide(10,2) << endl;
//	//	
//	//T_FourBasic<float> B;
//	vector<int> D;
//	vector<int>::iterator iter; //가리키는 화살표같은 거
//
//	D.push_back(1);
//	D.push_back(2);
//	D.push_back(3);
//	
//	iter = D.begin();//D의 처음을 가리킴 (주소를 가리키고있어서 출력하려면 값을 가져오라고 해야함)
//	/*cout << *iter++ << endl;
//	cout << "" << endl;*/
//
//	while (iter != D.end())
//	{
//		cout << *iter++ << endl;
//	}
//
//	for (iter = D.begin(); iter != D.end(); iter++)
//	{
//		cout << *iter << endl;
//	}
//
//	for (auto Data : D)
//	{
//		cout << Data << endl;
//	}
//
//
//	return 0;
//}
//
////template<typename T>
////T T_FourBasic<T>::Add(T A, T B)
////{
////	return A + B;
////}
////
////template<typename T>
////T T_FourBasic<T>::Subtract(T A, T B)
////{
////	return A - B;
////}
////
////template<typename T>
////T T_FourBasic<T>::Multiply(T A, T B)
////{
////	return A * B;
////}
////
////template<typename T>
////T T_FourBasic<T>::Divide(T A, T B)
////{
////	return A / B;
////}
