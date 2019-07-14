/*
Here we will try to calculate the factorial of any number entered by the user
Use recursion.

Using int, I could only correctly calculate factorial of numbers less than 12.
Converted return type of fact(), temp variable, and f variable in main() to unsigned long.
Still code is no good for values greater than 12.
Converting w, and a fromm main() to unsigned long as well.
Still program does not give correct answer for the value 13.

*/
#include<iostream>
using namespace std;
unsigned long fact(unsigned long w)
{
	unsigned long temp, default_value = 1 ;
	if (w < 2)
	return(default_value);
	else
	{
		temp = w * fact(w - 1);
		return(temp);
	}
}

int main()
{
	unsigned long a, f;
	cout << "\n Enter a number to calculate its factorial: ";
	cin >> a;
	f = fact(a);
	cout << "\nThe Factorial of the number is = " << f << endl;
	system("pause");
	return(0);
}