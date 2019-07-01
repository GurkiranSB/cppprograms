/*
Just an informative bit on the storage classes in C++

Variable has an associated data type. 
Along with that, a variable also has a storage class associated with it.

Storage class of a variable specifies the lifetime and the visibility of the variable within the program.

There are four storage classes:

Automatic (auto):
This is the default storage class of any type of variable.
Visibility is restricted  to the function in which it is declared.
Lifetime is also limited till its container function is executing.


External (extern):
An external variable is declared outside of a function but it is accessible inside of a function block.
Visibility is spread all across the program.
Lifetime of an external variable is same as the lifetime of a program.

Static (static):
A static variable has the visibility of a local variable, but the lifetime of an external variable.
(retains varible value, after function is executed, so that the value can be used by future function calls)

Register (Register):
Similar in behavior to an automatic variable.
Automatic varibles re stored in primary memory.
Registers are stored in the CPU.
The objective to store a variable as a register value is to increase its access speed.
This eventually makes the program run faster.


___________________________________________
		Visibility->|Local 		|Global	   |
Lifetime.|.			|			|		   |
_________.__________|___________|__________|
Function block 		|	auto &	|		   |
					|	register|		   |
____________________|___________|__________|
Entire program 		|	static	|	extern |
____________________|___________|__________|






*/












