#include <iostream>

int findMin(int a[], int size) {
    if (size == 1) {
        return a[0];
    } else {
        int minRest = findMin(a, size - 1);
        return (a[size - 1] < minRest) ? a[size - 1] : minRest;
    }
}

int main() {
    int size;
    std::cout << "Enter size of the array: ";
    std::cin >> size;

    int arr[size];
    std::cout << "Enter elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    int minElement = findMin(arr, size);
    std::cout << "The minimum element in the array is: " << minElement << std::endl;

    return 0;
}
