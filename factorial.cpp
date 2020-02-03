#include <iostream>

using namespace std;

int factorial(int n) {

	int i = n;
	for (n--; n >= 0; --n)
		i *= n;
	return i;
}

int main() {
	
	std::cout << "Running factorial..." << std::endl;

	int n = 4;

	std::cout << "factorial(" << n << "): "
	          << factorial(n) << std::endl;
}
