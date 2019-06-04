//Program to illustrate scope of variable and how to access the global variable from anywhere using scope resolution operator ::

#include<iostream>

using namespace std;

int m = 10; //global m

int main()
{
	int m = 20; //m redeclared, local to main
	
	{
		int k = m;
		int m = 30; //m declared again, local to inner block
		cout << "We are in the inner block. \n" << "k = " << k << "\n m = " << m << "\n ::m = " << ::m;

	}

	cout << "\n We are in the outer block. \n" << "m = " << m << "\n ::m = " << ::m << "\n";

	return 0;
}
