#include <iostream>
#include <string>
#define MAX 30

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
    int digit[MAX] = {};
    int cnt = 0;
    while (true) {
        if (decimalN < b) {
            digit[cnt] = decimalN;
            break;
        }

        digit[cnt++] = decimalN % b;
        decimalN /= b;
    }

    // 역순 출력
    for (int i = cnt; i >= 0; i--) {
        cout << digit[i];
    }

    return 0;
}