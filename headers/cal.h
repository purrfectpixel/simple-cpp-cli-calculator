#include <iostream>

using namespace std;

float add(float a, float b)
{
	return a + b;
}

float sub(float a, float b)
{
	return a - b;
}

float mul(float a, float b)
{
	return a * b;
}

float divide(float a, float b)
{
	if(b == 0)
	{
		cout << "ERROR! Var b is 0" << endl;
		return 0;
	}
	return (float)a / b;
}