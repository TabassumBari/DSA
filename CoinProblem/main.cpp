#include <iostream>
#include"CoinMoney.h"
#include <limits>

int CoinsNeeded(int coin[], int n, int amount) {
    int a1[amount + 1];
    a1[0] = 0;

    for (int i = 1; i <= amount; i++) {
        a1[i] = std::numeric_limits<int>::max();
        for (int j = 0; j < n; j++) {
            if (coin[j] <= i && a1[i - coin[j]] != std::numeric_limits<int>::max()) {
                a1[i] = std::min(a1[i], a1[i - coin[j]] + 1);
            }
        }
    }

    return a1[amount];
}

int main() {
    int n;
    std::cin >> n;

    int coin[n];
    for (int i = 0; i < n; i++) {
       std:: cin >> coin[i];
    }

    int amount;
    std :: cin >> amount;

    int minCoin = CoinsNeeded(coin, n, amount);
    std:: cout << minCoin << std:: endl;

    return 0;
}

