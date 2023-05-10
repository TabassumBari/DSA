#include <iostream>
#include <queue>
using namespace std;

void printBinaryNum(int n) {
    queue<string> Q;
    Q.push("1");

    for (int i = 0; i < n; i++) {
        string binaryNumber = Q.front();
        Q.pop();
        cout << binaryNumber << endl;

        Q.push(binaryNumber + "0");
        Q.push(binaryNumber + "1");
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    printBinaryNum(n);

    return 0;
}
