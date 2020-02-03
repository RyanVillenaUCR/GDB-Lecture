#include <iostream>
#include <cstdlib>

using namespace std;

int factorial(int n) {

    int i = n;
    for (n--; n >= 0; --n)
        i *= n;
    return i;
}

int main(int argc, char* argv[]) {
    
    std::cout << "Running factorial..." << std::endl;

    const int DEFAULT_VALUE = 4;
    int n = (argc == 2 ? atoi(argv[1]) : DEFAULT_VALUE); // Prioritize CLI input, else hardcode value

    std::cout << "factorial(" << n << "): "
              << factorial(n) << std::endl;
}
