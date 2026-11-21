#include <iostream>

using namespace std;

int a, b, c;

int GetMin(int a, int b, int c) {
    int min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    return min;
}

int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    cout << GetMin(a, b, c) << endl;

    return 0;
}