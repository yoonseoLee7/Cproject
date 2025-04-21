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

