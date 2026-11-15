#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int a, b;
string n;

int main() {
    cin >> a >> b;
    cin >> n;

    // Please write your code here.
    int decimalN = 0;
    for (int i = 0; i < n.size(); i++) {
        decimalN = decimalN * a + n[i] - '0';
    }

    vector<int> digit;
    while (true) {
        if (decimalN < b) {
            digit.push_back(decimalN);
            break;
        }

        digit.push_back(decimalN % b);
        decimalN /= b;
    }

    reverse(digit.begin(), digit.end());
    for (int v : digit) {
        cout << v;
    }

    return 0;
}