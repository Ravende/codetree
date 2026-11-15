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

    // a진수 -> 10진수로 변환
    int decimalN = 0;
    for (int i = 0; i < n.size(); i++) {
        decimalN = decimalN * a + n[i] - '0';
    }

    // 10진수 -> b진수로 변환
    vector<int> digit;
    while (true) {
        if (decimalN < b) {
            digit.push_back(decimalN);
            break;
        }

        digit.push_back(decimalN % b);
        decimalN /= b;
    }

    // 역순 출력
    reverse(digit.begin(), digit.end());
    for (int d : digit) {
        cout << d;
    }

    return 0;
}