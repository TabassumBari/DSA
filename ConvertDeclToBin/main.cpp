#include <iostream>

using namespace std;
int DecToBin(int dec) {
    if (dec == 0) {
        return 0;
    } else {
        return (dec % 2) + 10 * DecToBin(dec / 2);
    }
}

int main() {
    int decimal;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;

    int binary = DecToBin(decimal);
    std::cout << "Binary representation: " << binary << std::endl;

    return 0;
}
