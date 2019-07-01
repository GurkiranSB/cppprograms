//Union example
/*
Here we see a small snippet for unions. 

The size of the union is equal to the size of the largest member element.

Different than structures. In structures, the size will be the sum of the sizes of the member elements.




To find why unions require less memory and members need to be accessed one at a time (not simultaneously)?



Structure allocates storage space for all its members separately.
Whereas, Union allocates one common storage space for all its members

We can access only one member of union at a time. 
We can’t access all member values at the same time in union. 
But, structure can access all member values at the same time. 

This is because, Union allocates one common storage space for all its members. 
Where as Structure allocates storage space for all its members separately.
Many union variables can be created in a program and memory will be allocated for each union variable separately.
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