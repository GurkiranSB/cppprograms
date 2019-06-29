//Union example
/*
Here we see a small snippet for unions. 

The size of the union is equal to the size of the largest member element.

Different than structures. In structures, the size will be the sum of the sizes of the member elements.
*/


#include<iostream>

using namespace std;

int main()
{
	union result
	{
		int marks;
		char grade;
		float percent;
	};
}