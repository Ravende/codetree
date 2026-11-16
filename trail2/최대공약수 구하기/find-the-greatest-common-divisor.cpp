#include <iostream>

using namespace std;

int n, m;

int GetGcd(int n, int m) {
    for (int i = min(n, m); i >= 2; i--) {
        if (n % i == 0 && m % i == 0) {
            return i;
        }
    }
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    int gcd = GetGcd(n, m);
    cout << gcd << '\n';

    return 0;
}