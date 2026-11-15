#include <iostream>

using namespace std;

int N;

int AddDivide(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum / 10;
}

int main() {
    cin >> N;

    // Please write your code here.
    int num = AddDivide(N);
    cout << num << endl;

    return 0;
}