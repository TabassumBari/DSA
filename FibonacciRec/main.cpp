#include <iostream>

using namespace std;

int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    int n;
    std::cout << "Enter value of n: ";
    std::cin >> n;

    int result = fib(n);
    std::cout << "The " << n << "th Fibonacci number is: " << result << std::endl;

    return 0;
}

