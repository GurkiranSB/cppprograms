/*
Code for tower of hanoi.
Website to cross check the output of the code:
https://www.mathsisfun.com/games/towerofhanoi.html

Three verticle rods in front of you.
Leftmost rod has Disks stacked from largest at the bottom, to smallest disks at the top. 
You have to shift all the disks to another rod.
Rules:
Can transfer only one disk at a time.
Larger disk cannot be stacked on top of a smaller disk.
Only the uppermost disk on a stack can be moved.

*/



#include<iostream>
using namespace std;

void toh(int d, char from, char to, char aux)
{
	if (d == 1)
	{
		cout << "\nShift disk from tower " << from << " to tower " << to << endl;
		return;
	}
	else
	{
		//took the case of two disks, and wrote the steps - (a,c,b) was the parameter order.
		//Converted it to (from,aux,to) so that it would work for generic cases also.
		toh(d - 1, from, aux, to);
		cout << "Shift disk from tower " << from << " to tower " << to <<endl;
		toh(d - 1, aux, to, from);
	}
}

int main()
{
	int d;
	cout << "\n Enter number of disks in the leftmost tower: ";
	cin >> d;
	toh(d, 'a', 'b', 'c');
	system("pause");
	return(0);
}

