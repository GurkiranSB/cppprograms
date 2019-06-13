/*
Here we look over the basics of pointers

*p = something means change the value stored in the memory location
*p = something means change the value stored in the memory location
*p= something means change the value stored in the memory location

p = something means change the pointer value
p = something means change where the pointer is pointing
p = something means change the address where the pointer is pointing.
*/




#include<iostream>

using namespace std;

int main()
{
	char a = 'a'; //here we are creating a variable named a, with the value 'a'
	char *p; // create a pointer named p, it points to a random address. This address is outside the scope of this program
				// somewhere where the program is not allowed to access or read the value stored in the address/memory.
	//cout << *p; //This will output the value of the value stored in the memory location where the pointer is pointing.
				//Since pointer is not assigned a value, it has garbage value, we will get a segmentation fault as 
				// program is not allowed to access and read the memory location. Segfaults are caused by 
				//a program trying to read or write an illegal memory location.	
	p = &a;		// assign the pointer to point to the variable named a. Remember this memory location contains the value 'a'
	cout << *p; //output the value of the memory location pointed to by p, the value 'a' should get printed.
	*p = 'b';	//change the value at the memory location pointed by the pointer, from the previous value 'a', to 'b'
	cout << *p; //output the value of the memory location. 'b' should be printed.
	return 0;
}