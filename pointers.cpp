#include <iostream>

int main(void) {
	// character arrays are strings
	// length must allow for terminating 0 character
	char string[6] = "Hello";
	// the array name provides a pointer to the first element
	// so create a pointer to the first element
	char* letter = string;
	// pointer arithmetic
	// move 3 positions up, so now pointing to string[3]
	letter += 3;
	// change value of cell pointer points to to 'p'
	*letter = 'p';
	// this way you can also change values
	string[4] = '!';
	// print to output
	std::cout << string << '\n';
	return 0;
	}
