/*
Inline Functions. 
It is a request to the computer to just copy paste the function definition whereever there is a function call.
Can be done when the function is small and not too complicated.
Just note down how a function is made inline (look at the syntax)
/

#include<iostream>

using namespace std;

inline float mul(float x, float y)
{
	return(x * y);
}

inline double div(float p, float q)
{
	return (p / q);
}

int main()
{
	float a = 12.345;
	float b = 9.82;
	cout << mul(a, b) << "\n";
	cout << div(a, b) << "\n";
	system("pause");
	return(0);
}






*/