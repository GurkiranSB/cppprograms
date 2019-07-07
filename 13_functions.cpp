/*
This is chapter 4 - Functions in C++ from Balagurusami

###4.1
Intro is pretty basic. Where the control is transferred, and what is the syntax for an example function:

void show(); //function declaration
main()
{
	.......
	show();  //function call
	....
}
void show()
{
	....
	....
	....
}

Also, advantages of using functions.


###4.2
THE MAIN FUNCTION

In C++ the main() returns a value of type int to the operting system.

The functions that have a return value should use the return(); statement for termination

Thus define main() as follows:
 int main()
 {
	.....
	.....
	return(0);
 }

The keyword int in the main() header is optional.

Function should return a value <-- Error in Turbo C++ if there is no return statement. Then it proceeds to compile the program.
So why to use the return statement when it is still compiling?

It is a good coding practice to use the return statement and actually return a value from the main program.
Many operating systems test the return value (called the exit value) to determine if there is any problem.
The normail convention is that an exit value of zeromeans the program ran successfully, 
while a non-zero value means there was a problem.
The explicit use of a return(0) statement will indicate that the program was successfully executed.

###4.3 FUNCTION PROTOTYPING
The prototype describes the function interface to the compiler by giving details such as 
the number and type of arguments and the type of return values.

Any violation in matching the arguments or the return types will be caught by the compiler
at the time of compilation itself.

**************************************Doubt: Function is declared inside the calling function? Why?
Function prototype is a declaration statement in the calling program and is of the form:
type function_name (argument_list);

The argument list contains the types and names of arguments that must be passed to the function.
eg:
float volume (int x, float y, float z);

In a function declartion, the names of the arguments are dummy variables, and thus optional
Thus,
float volume (int, float, float);
is acceptable at the place of declaration. 
At this stage, the compiler only checks for the type of arguments when the function is called.

In the function definition, names of the arguments are required because the arguments must be referenced inside the function.

The calling statement must not include the type names in the argument list.
eg.
float cube1 = volume(b1,w1,h1);   // Function Call




*/


