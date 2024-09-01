#include <iostream>
void HelloWorld();
int Addition(int a, int b);

int main()
{
	HelloWorld();

	int printInteger = Addition(3, 5);
	std::cout << printInteger << std::endl;
}

/*
* Prints "Hello World!" to the console, and creates a new line
* 
* 
* 
* Note: this is a what we call a function or a method.
* functions can be called elsewhere in the code, such as in the main() function
* 
* functions have a return data type, which is the data type the function will give when called
* void means the function does not return anything
*/
void HelloWorld()
{
	//TODO: Implement function
}

/*
* Adds two integers together and returns the result
* 
* @param a - the first integer to add
* @param b - the second integer to add
* 
* Note: this function has the return type int, which means the caller of this function will gen an integer back
*/
int Addition(int a, int b)
{
	//TODO: Implement function
	return 0;
}