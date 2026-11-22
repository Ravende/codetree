#include <iostream>

using namespace std;

int n, m;

int GetLcm(int n, int m) {
    for (int i = 1; i <= m; i++) {
        if ((n * i) % m == 0) {
            return (n * i);
        }
    }
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    cout << GetLcm(n, m) << endl;

    return 0;
}