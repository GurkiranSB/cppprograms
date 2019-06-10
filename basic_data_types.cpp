/* 
Here, we are going to look at some info about the basic data types in C++ Also, we are going to look at 


The basic data types may be used along with some modifiers. 
These include signed, unsigned, long, and short. These may be applied to the charcter and integer basic data types.
The modifier long may also be applied to double.

Basic data types include the following:

char
unsigned char
signed char

int
unsigned int
signed int
short int
unsigned short int
signed short int
long int
signed long int
unsigned long int

float
double
long double


Two additional data types have been added: bool and wchar_t.


Type void was introduced in ANSI C 

void specifies the return type of a function. Also, void indicates an empty argument list to a function.
Example: void funct1(void);

void can also be used to declare generic pointers.
Example: void *gp; Here gp becomes generic pointer

A generic pointer can be assigned a pointer value of any basic data type, but may not be dereferenced.
example:
int *ip; //This is int pointer
gp = ip; //assign int pointer to void pointer

However, the following is an illegal statement:
*ip = *gp
This is because it would make no sense to dereference a pointer to a void value. //Didn't understand this exactly.

Similarly, ip = gp; will also be an illegal statement.

You can use:
ip = (int *)gp;

*/


#include<iostream>

using namespace std;

void funct1(void);

int main()
{
	void *gp;
	int *ip;
	//gp = ip;
	ip = (int *)gp;
	cout << "This is gp: " << gp << "\n";
	cout << "\n This is *ip: " << *ip << "\n"; //Are these address values? or values stored in that address?

}
