#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}

int main()
{
	int a, b;
	cout << "\n Enter two numbers : \n";
	cin >> a >> b;
	cout << "\n Before Swap:\n";
	cout << "\n First Number = " << a;
	cout << "\n Second Number = " << b;
	swap(a, b);
	cout << "\n After Swap:\n";
	cout << "\n First Number = " << a;
	cout << "\n Second Number = " << b;
	system("pause");
	return(0);
}