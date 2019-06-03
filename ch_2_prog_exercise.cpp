#include<iostream>

using namespace std;
class temp
{
	int f,c;
	public:
		void get_far(void);
		void f_to_c(void);
};
void temp :: get_far(void)
{
	cout << "\n This time we are using a class";
	cout << "\n Enter the farenheit temperature: ";
	cin >> f;
}
void temp :: f_to_c(void)
{
	c = (f-32)*5/9;
	cout << "\n The celcius equivalent value is: " << c << "\n";
}


int main()
{
	//display a certain given output as it appears:
	cout << "Maths = 90 \n Physics = 77 \n Chemistry = 69";

	//input two numbers and display larger value
	int number1, number2;
	cout << "\n\n Give me two numbers: ";
	cin >> number1 >> number2;
	if(number1>number2)
		cout << "\nThe larger number is: " << number1;
	else 
		cout << "\nThe larger number is: " << number2;

	//display ascii value of input character
	char z;
	cout << "\n Input a character: ";
	cin >> z;
	cout << "\n The ASCII value of this character is: " << int(z);

	//Find the value using the formula given, after asking for three values from the user
	int a, b, c;
	cout << "\nEnter three numbers: ";
	cin >> a >> b >> c;
	cout << "\n The value according to the formula (x=a/b-c) is: " << a/b-c;

	//farenheit to celcius
	int f, cel;
	cout << "\n Enter a farenheit value: ";
	cin >> f;
	cel = (f-32)*5/9;
	cout << "\n The corresponding celcius value is: " << cel << "\n";

	//redo farenheit to celcius with class temp and member functions
	temp t;
	t.get_far();
	t.f_to_c();

	return 0;
}