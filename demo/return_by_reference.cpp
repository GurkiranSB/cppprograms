/*


A function can also return by reference.
Following is a sample program to return the greater number if numbers are unequal




#include<iostream>
using namespace std;

int & max(int &x, int &y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int a, b;
	cout << "\nEnter two numbers: \n";
	cin >> a >> b;
	cout << "\nThe greater of the two numbers is: ";
	cout << max(a, b);
	system("pause");
	return(0);
}




*/