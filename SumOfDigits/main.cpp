#include <iostream>

using namespace std;
#include <iostream>

int sumOfDigits(int x) {
    if (x < 10) {
        return x;
    } else {
        return x % 10 + sumOfDigits(x / 10);
    }
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int result = sumOfDigits(num);
    std::cout << "Sum of digits of  " << num << " is: " << result << std::endl;

    return 0;
}

