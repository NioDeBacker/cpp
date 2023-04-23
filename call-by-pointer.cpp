#include <iostream>
using namespace std;

void Square(int *pointer) {
	int i = *pointer;
	*pointer = i*i;
	return;
}

int main(void) {
	int x = 3;
	Square(&x);
	cout << "x = " << x << '\n';
}
