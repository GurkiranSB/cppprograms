/*

R value 
cannot assign them
eg 50 = something you cannot write. 

L value
you can assign something to these.
eg variables

First, design menu, with three categories - Appetizers, Main Course, Desserts.
Appetizers: Fries - Potato deep fried - 40 rupees, Sandwich - All vegetables come in wheat bread - 80 rupees.
Main Course: Pav Bhaji - Vegetable dish with Bread - 100 rupees, Special Pav Bhaji - Extra potatoes and vegetables - 120 rupees.
Dessert: Ice Cream - Vanilla - 20 rupees, Mango delight - Contains preservatives - 30 rupees.

Next ask user if they want to look at appetizers, and display food items present in appetizers only. 
Here price is getting displayed, but getting problem in displaying string.
*/

#include<iostream>

using namespace std;

struct FoodItems
{
	int price;
	const char *name;
	const char *description;
	FoodItems()
	{}
	FoodItems(int p, const char *n, const char *d)
	{
		price = p;
		name = n;
		description = d;
	}

	void printitems(FoodItems a, FoodItems b)
	{
		cout << a.name << endl << a.description << endl << a.price << " rupees." << endl << endl;
		cout << b.name << endl << b.description << endl << b.price << " rupees." << endl << endl;
	}
};

class Appetizers
{
	public:
		Appetizers()
		{
			FoodItems myfood;
			FoodItems fries(40, "Fries", "Potato deep fried");
			FoodItems sandwich(80, "Sandwich", "All vegetables come in Wheat Bread");
			myfood.FoodItems::printitems(sandwich, fries);
		}
	
};

int main()
{
	cout << "\n Welcome to my Restaurant.\n Press 1 to display Appetizers.";
	int choice;
	cin >> choice;
	if (choice == 1)
		Appetizers apt; //appetizer constructor will execute then fooditems constructor followed by printing.
	else
		cout << "\n Invalid choice selected.";
	return(0);
}


















/*

The error I got when I wrote the following:

int price;
	char *name;
	char *description;
	FoodItems()
	{}
	FoodItems(int p, char *n[30], char *d[300])
	{
		price = p;
		name = n;
		description = d;
	}


Compilation failed due to following error(s):

main.cpp: In constructor ‘FoodItems::FoodItems(int, char**, char**)’:
main.cpp:25:10: error: cannot convert ‘char**’ to ‘char*’ in assignment
   name = n;
          ^
main.cpp:26:17: error: cannot convert ‘char**’ to ‘char*’ in assignment
   description = d;
                 ^
main.cpp: In constructor ‘Appetizers::Appetizers()’:
main.cpp:42:52: error: no matching function for call to ‘FoodItems::FoodItems(int, const char [6], const char [18])’
    FoodItems fries(40, "Fries", "Potato deep fried");
                                                    ^
main.cpp:22:2: note: candidate: FoodItems::FoodItems(int, char**, char**)
  FoodItems(int p, char *n[30], char *d[300])
  ^~~~~~~~~
main.cpp:22:2: note:   no known conversion for argument 2 from ‘const char [6]’ to ‘char**’
main.cpp:20:2: note: candidate: FoodItems::FoodItems()
  FoodItems()
  ^~~~~~~~~
main.cpp:20:2: note:   candidate expects 0 arguments, 3 provided
main.cpp:15:8: note: candidate: constexpr FoodItems::FoodItems(const FoodItems&)
 struct FoodItems
        ^~~~~~~~~
main.cpp:15:8: note:   candidate expects 1 argument, 3 provided
main.cpp:15:8: note: candidate: constexpr FoodItems::FoodItems(FoodItems&&)
main.cpp:15:8: note:   candidate expects 1 argument, 3 provided
main.cpp:43:75: error: no matching function for call to ‘FoodItems::FoodItems(int, const char [9], const char [35])’
    FoodItems sandwich(80, "Sandwich", "All vegetables come in Wheat Bread");
                                                                           ^
main.cpp:22:2: note: candidate: FoodItems::FoodItems(int, char**, char**)
  FoodItems(int p, char *n[30], char *d[300])
  ^~~~~~~~~
main.cpp:22:2: note:   no known conversion for argument 2 from ‘const char [9]’ to ‘char**’
main.cpp:20:2: note: candidate: FoodItems::FoodItems()
  FoodItems()
  ^~~~~~~~~
main.cpp:20:2: note:   candidate expects 0 arguments, 3 provided
main.cpp:15:8: note: candidate: constexpr FoodItems::FoodItems(const FoodItems&)
 struct FoodItems
        ^~~~~~~~~
main.cpp:15:8: note:   candidate expects 1 argument, 3 provided
main.cpp:15:8: note: candidate: constexpr FoodItems::FoodItems(FoodItems&&)
main.cpp:15:8: note:   candidate expects 1 argument, 3 provided


*/