#include <iostream>

int main(void) {
	std::cout << "Enter five integers ...\n";
	int x[5];
	int i,j,n,t;
	for (n=0; n<5; n++) {
		std::cin >> t;
		i = 0;
		while (i<n && t>x[i]) {
			i++;
		}
		for (j=n; j>i; j--) {
			x[j] = x[j-1];
		}
		x[i] = t;
	}
	std::cout << "Sorted list:";
	for (n=0; n<5; n++) {
		std::cout << ' ' << x[n];
	}
	std::cout << '\n';
	return 0;
}
