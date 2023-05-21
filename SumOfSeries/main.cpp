#include <iostream>

using namespace std;


double SeriesSum(int n) {
    if (n == 0) {
        return 0.0;
    } else {
        return 1.0 / (1 << (n - 1)) + SeriesSum(n - 1);
    }
}

int main() {
    int num;
    std::cout << "Enter the number of terms in the series: ";
    std::cin >> num;

    double sum = SeriesSum(num);
    std::cout << "Sum of the series: " << sum << std::endl;

    return 0;
}
