#include <iostream>
#include "Complex.hpp"

using namespace std;
int main()
{
	Complex A(20.0, -15.0);
	Complex B(1, 1);
	Complex C;
	Complex D;

	C = A.operator+(B);//both examples of addition
	// call the member operator overloaded function

	cout << A << " + " << B << " = " << C << endl;

  	std::cin.get();  //Used for pausing the program until keyboard input

	D = A + B;
	// Call exactly the same member operator overloaded function.
	cout << A << " + " << B << " = " << D << endl;

  	std::cin.get();  //Used for pausing the program until keyboard input

	D = operator+(A, B);
	// This approach will call the non-member function, but needs the 
	// friend declaration inside the class
	cout << A << " + " << B << " = " << D << endl;

  	std::cin.get();  //Used for pausing the program until keyboard input	

	return 0;
}


