/* 
Structures are used to group logically related data items together.

Structures are used for grouping elements with dissimilar types.

This program will illustrate the structures concept by making a structure called book.

Thus, book will become a user defined type. 

We can then create varibles of this user defined type. (book1, book2, etc.)

Then we will access the member functions of this user defined type book.
*/


#include<iostream>

using namespace std;

struct book
{
	//char title[40];
	char author[40];
	int pages;
	float price;
} book1, book2, book3;

int main()
{
	book1.price = 500.8;
	book2.price = 1234.5;
	book3.price = 637.9;
	book1.pages = 800;
	book2.pages = 100;
	book3.pages = 289;
	const char book1.author = "Chetan Bhagat";
	/*book2.author = "Stephen Hawking";
	book3.author = "Larry King";
	book1.title = "2 States";
	book2.title = "Brief History of Time";
	book3.title = "My Remarkable Journey";*/

	cout << book1.price;
	cout << book1.author;
	return 0;
}