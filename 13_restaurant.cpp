/*
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
	//string name;
	//string description;
	FoodItems()
	{}
	FoodItems(int p)//, string *n, string *d)
	{
		price = p;
		//name = n;
		//description = d;
	}

	void printitems(FoodItems a, FoodItems b)
	{
		cout << a.price<<endl;//a.name << endl << a.description << endl << a.price << " rupees." << endl << endl;
		cout << b.price;//b.name << endl << b.description << endl << b.price << " rupees." << endl << endl;
	}
};

class Appetizers
{
	public:
		Appetizers()
		{
			FoodItems myfood;
			FoodItems fries(40);//, "Fries", "Potato deep fried");
			FoodItems sandwich(80);//, "Sandwich", "All vegetables come in Wheat Bread");
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