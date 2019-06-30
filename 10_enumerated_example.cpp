/*
Classes are also user defined data types.
The class variables are called as objects, which are the central focus of object oriented programming


Enumerated Data types
-Attaching names to numbers. 
-Use enum keyword
-It enumerates a list of words by assigning them values0,1,2, and so on.

ANSI C permits an enum to be defined within a classor a structure, but the enum is globally visible.
In C++ an enum defined within a class or structure is local to that class or structure only.

*/


#include<iostream>

using namespace std;

int main()
{
	enum shape{circle,square,triangle};
	enum colour{red, blue, green, yellow};
	enum position{off, on};
	//By using the tag names shape, position, and colour, become new type names.
	//We can declare new variables using these tag names
	
	shape ellipse; //ellipse is of type shape
	colour background; //background is of type colour

	//ANSI C defines the types enums to be int
	//In C++ each enumerated data type retains its own separate type
	//C++ does not permit an int value to be automatically converted to an enum value.
	colour background = blue; //allowed
	colour background = 7; //error in c++
	colour background = (colour) 7; //OK

	//However, an enumerated value can be used instead of an int value
	int c = red; //valid, colour type promoted to int

	// By default, the enumerators are assigned integer values starting with 0 for the first enumerator,
	// 1 for the second, and so on. We can override the default by explicitly assigning integer values to the enumerators. Eg:
	enum colour {red, blue=4, green=8}; //red is 0, blue 4, and green 8
	enum colour{red=5, blue, green}; // red is 5, blue 6, and green 7

	enum {off, on}; //enum without tag name allowed. Sometimes called anonymous enums.
	int swithch_1 = off;
	int switch_2 = on;

	//we can utilize the enum for switch statements. Ex. consider enum shape defined earlier
	cout<<"Enter shape code: ";
	int code;
	cin >> code;
	while(code >= circle && code<= triangle)
	{
		switch (code)
		{
			case circle:
			//
			//
			break;
			case square:
			//
			//
			break;
			case triangle:
			//
			//
			break;
		}
		cout<<"Enter shape code: ";
		int code;
	}
	cout << "\n BYE \n";
	return 0;
}